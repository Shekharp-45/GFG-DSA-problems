//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
   
    int longestSubseq(int n, vector<int> &a) {
        if(n==0)return 0;
        
        int dp[n];
        fill_n(dp, n, 1);
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if(abs(a[i] - a[j]) == 1) {
                    dp[i] =max(dp[i], dp[j]+1);
                }
            }
        }

        // Find the maximum value in dp array
        int maxLen = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxLen =max(maxLen, dp[i]);
        }

        return maxLen;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends