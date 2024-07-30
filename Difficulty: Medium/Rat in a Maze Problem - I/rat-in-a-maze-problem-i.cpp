//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int n;
    vector<string>ans;
    void solve(int i, int j,vector<vector<int>> &mat, string path){
        if(i<0 || i>=n || j<0 || j>=n || mat[i][j]==0){//base case
            return;
        }
        if(i==n-1 && j==n-1){//if we reach destination
            ans.push_back(path);
            return ;
        }
        mat[i][j]=0;
        
        //left
        path.push_back('L');
        solve(i,j-1,mat,path);
        path.pop_back();
        //right
        path.push_back('R');
        solve(i,j+1,mat,path);
        path.pop_back();
        //down
        path.push_back('D');
        solve(i+1,j,mat,path);
        path.pop_back();
        //up
        path.push_back('U');
        solve(i-1,j,mat,path);
        path.pop_back();
        //T.C= O(4n^2)  more accurate O(3n^2)  we having 3 option per cell
        //SC = O(1) but system memory space Depth of tree O(n^2)
        mat[i][j]=1;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        n=mat.size();
        solve(0,0,mat,"");
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends