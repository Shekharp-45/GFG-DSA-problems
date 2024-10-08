//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int findMaxSum(int n, int m, vector<vector<int>> mat) {
        if(n<3 || m<3){
            return -1;
        }
        int result=-1;
        for(int i=0;i<n-2;i++){
            int sum=0;
            for(int j=0;j<m-2;j++){
                sum=mat[i][j]+mat[i][j+1]+mat[i][j+2]+
                mat[i+1][j+1]+
                mat[i+2][j]+mat[i+2][j+1]+mat[i+2][j+2];
                
                result=max(result,sum);
            }
            
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, i, j;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (i = 0; i < N; i++)
            for (j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.findMaxSum(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends