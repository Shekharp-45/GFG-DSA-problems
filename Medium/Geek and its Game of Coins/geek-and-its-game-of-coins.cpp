//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findWinner(int n, int x, int y) {
       // Create a dp array to store winning (true) and losing (false) positions
     vector<int> dp(n + 1, 0);

    // Base case: If there are 0 coins, the player loses
    dp[0] = 0;

    // Fill the dp array
    for (int i = 1; i <= n; ++i) {
        // Check if there's any move that leaves the opponent in a losing position
        if ((i - 1 >= 0 && !dp[i - 1]) || 
            (i - x >= 0 && !dp[i - x]) || 
            (i - y >= 0 && !dp[i - y])) {
            dp[i] = 1; // Current position is winning if any of these moves is possible
        } else {
            dp[i] = 0; // Otherwise, it's a losing position
        }
    }

    // Return the result for the initial position with n coins
    return dp[n];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        Solution obj;
        int res = obj.findWinner(n, x, y);

        cout << res << endl;
    }
}

// } Driver Code Ends