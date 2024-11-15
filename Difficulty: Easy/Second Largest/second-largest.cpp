//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
         int ans=INT_MIN;
         int n=arr.size();
	    for(int i=0;i<n;i++){
	        ans=max(ans,arr[i]);//get max ele from arr
	    }
	    int second=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=ans){//ans spdun max ele i.e second element
	            second=max(second,arr[i]);
	        }
	    }
	    if(second==INT_MIN){//sapdla nytr -1
	        return -1;
	    }
	    return second;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends