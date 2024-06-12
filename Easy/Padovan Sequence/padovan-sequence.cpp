//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
        int mod=1e9+7;
       int dp[n+1];
       memset(dp,-1,sizeof(dp));
       dp[0]=dp[1]=dp[2]=1;
       if(dp[n]!=-1) return dp[n]%mod;
       
       for(int i=3;i<=n;i++){
           dp[i]=(dp[i-2]+dp[i-3])%mod;
       }
       return dp[n]%mod;
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends