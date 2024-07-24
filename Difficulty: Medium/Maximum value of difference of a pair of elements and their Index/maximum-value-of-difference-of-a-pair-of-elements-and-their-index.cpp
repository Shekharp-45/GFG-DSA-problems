//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxValue(int arr[], int N) {
        int max1=INT_MIN;
        int min1=INT_MAX;
        int ans;
        int max2=INT_MIN;
        int min2=INT_MAX;
        
        for(int i=0;i<N;i++)
        {
            max1=max(max1,arr[i]-i);
            min1=min(min1,arr[i]-i);
            max2=max(max2,arr[i]+i);
            min2=min(min2,arr[i]+i);
        }
        
       ans=max((max1-min1),(max2-min2));
        return ans; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxValue(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends