//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int n=arr.size();
        
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=maxi){
                ans=max(ans,maxi+arr[i]);
            }
        }
        return ans;
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
        int n = arr.size();
        Solution ob;
        int r = ob.pairsum(arr);
        cout << r << endl;
    }
    return 0;
}
// } Driver Code Ends