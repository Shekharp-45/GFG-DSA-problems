//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	  long long product = INT_MIN;
      long long pref = 1;
      long long suff = 1;
      for(int i=0;i<n;i++)
      {
        if(pref == 0)   pref =1;
        if(suff == 0)  suff =1;
        pref = pref * arr[i];
        suff = suff * arr[n-i-1];
        product = max(product , max(pref,suff));
      }
    return product;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends