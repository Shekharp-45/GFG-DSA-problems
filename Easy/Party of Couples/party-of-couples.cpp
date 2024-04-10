//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSingle(int n, int arr[]){
        
    int result=0;
    for(int i=0;i<n;i++){
         result^=arr[i];
      }
     
    return result;
    
//     Example:
// Input: arr[] = {1, 2, 3, 2, 1}

// Initially, ans = 0. 🌟
// Iterating through the array:
// For arr[0] = 1, ans = 0 ^ 1 = 1.
// For arr[1] = 2, ans = 1 ^ 2 = 3.
// For arr[2] = 3, ans = 3 ^ 3 = 0.
// For arr[3] = 2, ans = 0 ^ 2 = 2.
// For arr[4] = 1, ans = 2 ^ 1 = 3.
// The single person's integer in this example is 3, so the function will return 3.
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends