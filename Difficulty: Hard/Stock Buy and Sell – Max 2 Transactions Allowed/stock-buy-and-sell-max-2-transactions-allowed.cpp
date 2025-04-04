//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
       int fun(int i, int n, int curr, vector<int> &v, vector<vector<int>> &dp) {
            if(i==n || curr==4) return 0;
            if(dp[i][curr]!=-1) return dp[i][curr];
            
            int pick=0, notpick=0;
            if(curr%2==0) pick=-v[i]+ fun(i+1,n,curr+1,v,dp);
            if(curr%2==1) pick=v[i]+ fun(i+1,n,curr+1,v,dp);
            notpick= fun(i+1,n,curr,v,dp);
            
            return dp[i][curr] =max(pick,notpick);
        }
        
        int maxProfit(vector<int>& prices){
            int n=prices.size();
            vector<vector<int>> dp(n,vector <int> (4,-1));
            return fun(0,n,0,prices,dp);
        }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends