//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int missing=0,repeated=0;
        
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                missing=i;
            }else if(mp[i]==2){
                repeated=i;
            }
        }
        return {repeated , missing} ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends