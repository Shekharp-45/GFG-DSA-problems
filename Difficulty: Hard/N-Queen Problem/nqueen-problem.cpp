//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  vector<vector<int>>ans;
    bool check(vector<vector<int>>&board,int x,int y,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(board[i][y]==1)return false;
            if(board[x][i]==1)return false;
        }
        int row=x,col=y;
        while(row>=0 && col>=0)
        {
            if(board[row][col]==1)return false;
            row--;
            col--;
        }
         row=x,col=y;
        while(row>=0 && col<n)
        {
            if(board[row][col]==1)return false;
            row--;
            col++;
        }
        return true;
    }
    void find(vector<vector<int>>&board,int pot,int n)
    {
        if(pot==n)
        {
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(board[i][j]==1)v.push_back(j+1);
                }
            }
            ans.push_back(v);
            return;
        };
        for(int i=0;i<n;i++)
        {
            if(check(board,pot,i,n))
            {
                board[pot][i]=1;
                find(board,pot+1,n);
                 board[pot][i]=0;
            }
        }
       
    }
    vector<vector<int>> nQueen(int n) {
         vector<vector<int>>board(n,vector<int>(n,0));
        find(board,0,n);
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

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends