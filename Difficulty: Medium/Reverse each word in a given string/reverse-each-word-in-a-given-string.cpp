//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string Reverse(string &str){
        stack<char>st;
        string x;
        for(int i=0;i<str.length();i++){
            st.push(str[i]);
        }
        while(!st.empty()){
            x+=st.top();
            st.pop();
        }
        return x;
    }
    string reverseWords (string s)
    {
        int n=s.length();
        string str;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                ans+=Reverse(str)+".";
                str="";
            }else{
            str+=s[i];
            }
        }
        ans+=Reverse(str);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends