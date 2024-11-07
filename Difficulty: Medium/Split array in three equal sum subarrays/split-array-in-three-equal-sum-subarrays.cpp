//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++)sum+=arr[i];
        
        int curr=0,first=-1,second=-1;
        int ptr=0;
        //for First subarray
        while(ptr < n){
            curr+=arr[ptr];
            if(curr*3==sum){
                first=ptr;
                ptr++;
                break;
            }else if(curr*3 > sum){
                return {-1,-1};
            }else{
                ptr++;
            }
        }
        curr=0;
        //for Second subarray
        while(ptr < n){
            curr+=arr[ptr];
            if(curr*3==sum){
                second=ptr;
                ptr++;
                break;
            }else if(curr*3 > sum){
                return {-1,-1};
            }else{
                ptr++;
            }
        }
        curr=0;
        //for last subarray
        while(ptr < n){
            curr+=arr[ptr];
            ptr++;
        }
        if(curr*3 == sum){
                return {first,second};
            }else{
                return {-1,-1};
            }
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends