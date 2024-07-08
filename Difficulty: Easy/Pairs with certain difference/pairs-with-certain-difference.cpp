//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
    if (N < 2) return 0;

    sort(arr, arr + N);

        int sum = 0;

    // Traverse the sorted array from the end
    for (int i = N - 1; i > 0; --i) {
        // Check if the current element and the previous element can form a valid pair
        if (arr[i] - arr[i - 1] < K) {
            // if ture add to sum
            sum += arr[i] + arr[i - 1];
            // Skip the next element as it has already been paired
            --i;
        }
    }

    return sum;

        
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		cin>>arr[i];

		int K;
		cin>>K;
        Solution ob;
		cout<<ob.maxSumPairWithDifferenceLessThanK(arr,N,K)<<endl;
	}
	return 0;
}

// } Driver Code Ends