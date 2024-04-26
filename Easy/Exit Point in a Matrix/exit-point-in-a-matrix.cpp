//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        
         vector<int> a;
        int dx[4] = {0,1,0,-1},dy[4] = {1,0,-1,0};
        
        int i = 0 , j = 0, x = 0;
        if(matrix[0][0] == 1) x = 1;
        while(i+dx[x]<n&&j+dy[x]<m&&i+dx[x]>=0&&j+dy[x]>=0){
            i = i+dx[x];
            j = j+dy[x];
            if(matrix[i][j]==1){
                x++;
                if(x==4) x = 0;
                matrix[i][j] = 0;
            }
        }
        a.push_back(i);
        a.push_back(j);
        return a;
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
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends