//{ Driver Code Starts
#include <bits/stdc++.h>
#include <math.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minDiff(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        
        int i=0,j=0;
        int n=arr.size();
        int MinDifference=INT_MAX;
        while(j<n){
            if(j-i+1 < k)j++;
            else if(j-i+1 == k){
                MinDifference=min(MinDifference , arr[j] - arr[i]);
                i++;
                j++;
            }
        }
        return MinDifference;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        cout << obj.minDiff(arr, k) << endl;
    }
    return 0;
}
// } Driver Code Ends