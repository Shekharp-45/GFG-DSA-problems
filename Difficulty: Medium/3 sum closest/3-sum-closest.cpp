//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int closest3Sum(int arr[], int n, int target)
    {
        int minsum = INT_MAX;
        sort(arr,arr+n);
        int ans =0;
        for(int i=0;i<n;i++){
            int first = arr[i];
            int start = i+1;
            int end = n-1;
                while(start < end){
                    int sum = first+arr[start]+arr[end];
                    if(sum==target) return sum;
                    if(abs(target-sum)<abs(target-minsum))
                        minsum = sum;
                    if(abs(target-sum)==abs(target-minsum))
                        minsum = max(sum,minsum);
                    if(sum>target) end--;
                    else start++;
                }
        }
        return minsum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int Arr[N];
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int X;
        cin>>X;
        Solution obj;
        cout<<obj.closest3Sum(Arr, N, X)<<endl;
    }
    return 0;
}
// } Driver Code Ends