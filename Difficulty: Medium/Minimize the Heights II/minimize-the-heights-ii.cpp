
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


