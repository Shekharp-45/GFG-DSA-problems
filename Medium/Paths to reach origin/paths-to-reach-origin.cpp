//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int t[501][501];
    int mod=1e9+7;
    int solve(int x,int y){
       if(x==0 && y==0){
            return 1;
        }
        if(t[x][y]!=-1)return t[x][y];
        int left=0,right=0;
        
        if(y>0)
         left=solve(x,y-1)%mod;
        
        if(x>0)
         right=solve(x-1,y)%mod;
        
        return t[x][y]=(left+right)%mod;
    }
    int ways(int x, int y)
    {
        if(x==0 && y==0){
            return 1;
        }
        memset(t, -1, sizeof(t));
        return solve(x,y);
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends