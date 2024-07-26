//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
   int t[1001][1001];
     int LPS(string& s, int i, int j) {
        if(i > j)
            return 0;
        if(i == j)
            return 1;
        
        if(t[i][j] != -1)
            return t[i][j];
        if(s[i] == s[j])
            return t[i][j] = 2 + LPS(s, i+1, j-1);
        else
            return t[i][j] = max(LPS(s, i+1, j), LPS(s, i, j-1));
    }
    int longestPalinSubseq(string A) {
        memset(t,-1,sizeof(t));
        
        return LPS(A,0,A.length());
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends