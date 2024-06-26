//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
  int m,n;
  int sum=0;
    void solve(int i, int j, vector<vector<int>>& matrix){
        if(i<0 || j<0 || i>m || j>n){
            sum+=0;;
        }
        
        if(i>0 && matrix[i-1][j]==1){
            sum++;
        }
        if(i<m-1 && matrix[i+1][j]==1){
            sum++;
        }
        if(j>0 && matrix[i][j-1]==1){
             sum++;
        }
        if(j<n-1 && matrix[i][j+1]==1){
            sum++;
        }
    }
    int findCoverage(vector<vector<int>>& matrix) {
         m=matrix.size();
         n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                solve(i,j,matrix);
                }
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends