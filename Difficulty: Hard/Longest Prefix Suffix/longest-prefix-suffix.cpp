//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
    int n = str.length();
    vector<int> arr(n, 0); 
    
    int len = 0;  
    int i = 1;
    
    while (i < n) {
        if (str[i] == str[len]) {
            len++;
            arr[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = arr[len - 1];
            } else {
                arr[i] = 0;
                i++;
            }
        }
    }
    
    return arr[n - 1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends