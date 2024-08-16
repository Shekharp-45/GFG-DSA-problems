//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    
    int solve(int n, int x, int y, int z, int sum,int dp[]){
        if(sum==n)return 0;
        if(sum>n)return INT_MIN;
        
        if(dp[sum]!=-1)return dp[sum];
        
        int one=solve(n,x,y,z,sum+x,dp);
        int two=solve(n,x,y,z,sum+y,dp);
        int three=solve(n,x,y,z,sum+z,dp);
        
        return dp[sum]=1+max(one,max(two,three));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int dp[n];
        memset(dp,-1,sizeof(dp));
        int ans=solve(n,x,y,z,0,dp);
        if(ans<0){
            return 0;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends