//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if (n == 1) return 0;

         sort(arr.begin(),arr.end());
    int result = arr[n - 1] - arr[0]; //max he asun shakto yapude ny janar

    // Traverse the array and find the minimum difference
    for (int i = 1; i < n; ++i) {
        if (arr[i] >= k) { // Ensure the subtraction does not result in negative height
            int max_height = max(arr[i - 1] + k, arr[n - 1] - k);
            int min_height = min(arr[0] + k, arr[i] - k);
            result = min(result, max_height - min_height);
        }
    }

    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends