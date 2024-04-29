//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        stack<string>st;
         string temp="";
         string revtemp="";
         //char milun string banavne dot (.) aal tr tya temp la  stack mde add knre
         for(int i=0;i<S.size();i++)
         {
             if(S[i]=='.')
             {
                 st.push(temp);
                 st.push(".");
                 temp="";
             }
             else
             temp+=S[i];
         }
         //shevatach temp string add krne in stack
         //it is like IPV4 Question dot (.) matters
         st.push(temp);
         
         ////stack empty krt jane
         while(!st.empty())
         {
             revtemp+=st.top();
             st.pop();
         }
         return revtemp;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends