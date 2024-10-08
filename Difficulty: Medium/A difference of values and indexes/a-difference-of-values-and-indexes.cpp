//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        int ans = INT_MIN;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(int i=0;i<n;i++) {
            maxi = max(maxi,arr[i]-i);
            mini = min(mini,arr[i]+i);
            
            int v1 = (arr[i]+i)-mini;
            int v2 = maxi-(arr[i]-i);
            
            ans = max(ans,max(v1,v2));
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends