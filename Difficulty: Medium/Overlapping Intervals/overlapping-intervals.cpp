//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
         vector<vector<int>>ans;
         vector<int> temp={v[0][0],v[0][1]};
         for(int i=1;i<v.size();i++){
             if(v[i][0]<=temp[1]){
                 if(v[i][1]>=temp[1]){
                     temp={temp[0],v[i][1]};
                 }
             }
             else{
                 ans.push_back({temp[0],temp[1]});
                 temp={v[i][0],v[i][1]};//yantr loop exit zal ki finally add temp values in ans vector
             }
         }
         ans.push_back({temp[0],temp[1]});
         
         return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.mergeOverlap(arr);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends