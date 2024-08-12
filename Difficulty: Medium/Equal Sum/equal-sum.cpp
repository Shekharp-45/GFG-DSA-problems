//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
    int n = arr.size();
    if (n < 3) return "false"; //we need at least 3 elements

    int totalSum = 0;
    for (int num : arr) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 1; i < n - 1; i++) {
        leftSum += arr[i - 1];
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return "true";
        }
    }
    return "false";
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        string res = obj.equilibrium(arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends