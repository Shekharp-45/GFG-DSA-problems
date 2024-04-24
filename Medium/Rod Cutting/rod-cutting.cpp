//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int dp[1001][1001];
    int solve(int i,int price[],int rodLen,int n)
{
    // Base Case
    if(rodLen==0) return 0;
    if(i==n) return -1e9;

    if(dp[i][rodLen]!=-1) return dp[i][rodLen];

    // Take or Nottake
    int nottake=solve(i+1,price,rodLen,n);
    int take=-1e9;
    if(rodLen>=(i+1))
    take=price[i]+solve(i,price,rodLen-(i+1),n);

    // return maximum out of them
    return dp[i][rodLen]=max(take,nottake);
}
int cutRod(int price[], int n) {
    memset(dp,-1,sizeof(dp));
    return solve(0,price,n,n);
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends