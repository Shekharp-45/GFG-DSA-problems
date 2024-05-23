//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int dp[1001][1001];
     int lcs(string& s, string& r, int i, int j){
        if(i<0 || j<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i]==r[j]){
            return dp[i][j]=1+lcs(s,r, i-1, j-1);
        }
        
        return dp[i][j]=max(lcs(s, r, i-1,j), lcs(s,r,i,j-1));
    }

    int kPalindrome(string str, int n, int k)
    {
    
        string r=str;
        reverse(r.begin(), r.end());
        
        memset(dp,-1,sizeof(dp));
        int x=lcs(str, r, n-1, n-1);
        int rem=n-x;
        
        return rem<=k;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends