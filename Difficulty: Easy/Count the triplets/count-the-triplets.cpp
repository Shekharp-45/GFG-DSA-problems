//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    int i=0;
	    int j=1;
	    int cnt=0;
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        mp[arr[i]]++;
	    }
	    while(i<n){
	        while(j<n){
	            if(mp.find(arr[i]+arr[j])!=mp.end()){
	            cnt++;
	           }
	           j++;
	        }
	        i++;
	        j=i+1;
	    }
	    return cnt;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends