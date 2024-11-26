//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int KidaneMax(vector<int> &arr , int n){
        int MaxSum=arr[0];
        int sum=arr[0];
        for(int i=1;i<n;i++){
            sum=max(sum+arr[i] , arr[i]);
            MaxSum=max(sum , MaxSum);
        }
        return MaxSum;
    }
    int KidaneMin(vector<int> &arr , int n){
        int MinSum=arr[0];
        int sum=arr[0];
        for(int i=1;i<n;i++){
            sum=min(sum+arr[i] , arr[i]);
            MinSum=min(sum , MinSum);
        }
        return MinSum;
    }
    int sum_of_arr(vector<int> &arr , int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    int circularSubarraySum(vector<int> &arr) {
         int n=arr.size();
         int TotalSum=sum_of_arr(arr,n);
         int MaxSum=KidaneMax(arr,n);
         int MinSum=KidaneMin(arr,n);
         
         int CircularSum=TotalSum-MinSum;
         
         if(MaxSum > 0){
             return max(MaxSum , CircularSum);
         }
         return MaxSum;
         
        
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
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends