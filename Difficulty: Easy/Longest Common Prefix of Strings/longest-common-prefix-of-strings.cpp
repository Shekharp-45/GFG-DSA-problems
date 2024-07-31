//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        sort(arr.begin(), arr.end());
        string ans="";
        //after sort
        //       0123
        //     0 geek 
        //     1 geeks 
        //     2 geeksforgeeks 
        //     3 geezer
        for(int i=0;i<arr[0].size();i++){//i size should be size of 1st string
             if(arr[0][i] == arr[arr.size()-1][i]){//i=0 la arr[0][0]==arr[3][0] true??
                ans.push_back(arr[0][i]);
            }
            else{
                break;
            }
            
        }
        return ans.size()<=0 ? "-1" : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends