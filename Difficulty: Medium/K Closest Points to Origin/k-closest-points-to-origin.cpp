//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int dist(int x, int y){
      
      int z = x*x + y*y;
      return z;
  }
  
  
  
  
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        
        for(int i =0; i<n; i++){
            int x = points[i][0];
            int y = points[i][1];
            int z = dist(x,y);
            pq.push({z,i});
        }
        vector<vector<int>>ans;
        vector<int>v;
        while(k>0){
            
            auto it = pq.top();
            v.push_back(it.second);
            pq.pop();
            k--;
            
        }
        sort(v.begin(), v.end());
        int z =0;
        for(int i =0; i<n; i++){
            if(i == v[z]){
                ans.push_back(points[i]);
                z++;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends