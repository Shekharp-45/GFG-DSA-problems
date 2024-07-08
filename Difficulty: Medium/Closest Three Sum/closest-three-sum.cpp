//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        int n= arr.size();
        int minsum = INT_MAX;
        sort(arr.begin(),arr.end());
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
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends