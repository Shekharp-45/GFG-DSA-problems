//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int MOD=1e9+7;
     int t[501][501];
  int solve(string &s1, string &s2, int i, int j)
  {
        if(j<0)
            return 1;
        if(i<0)
            return 0;
        
        if(t[i][j]!=-1)
            return t[i][j];
        
        if(s1[i]==s2[j])
            return t[i][j] =(solve(s1, s2, i-1, j-1)%MOD +solve(s1, s2, i-1, j)%MOD)%MOD;
        else
            return t[i][j]=solve(s1, s2, i-1, j)%MOD;
  }
    int countWays(string s1, string s2) {
        int n=s1.length(), m=s2.length();
        if(m>n)
            return 0;
        memset(t,-1,sizeof(t));
        return solve(s1, s2, n-1, m-1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends