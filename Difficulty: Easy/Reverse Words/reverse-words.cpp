//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        stack<string>st;
        vector<string>vec;
        string temp="";
        for(int i=0;i<str.length();i++){
            if(str[i]=='.'){
                st.push(temp);
                temp="";
            }else{
            temp+=str[i];
            }
        }
        st.push(temp);
        string ans="";
        while(!st.empty()){
            ans+=st.top()+'.';
            st.pop();
        }
        ans.pop_back();
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
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends