//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // Your code goes here
        stack<char>st;
        
        int n=s.length();
        
        for(int i=0;i<n;i++){
            st.push(s[i]);
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseString(s) << endl;
    }
    return 0;
}

// } Driver Code Ends