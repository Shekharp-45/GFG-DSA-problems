//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  //it will gives a precedence of operators
int prec(char c) {
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

// Function to return associativity of operators i.e L from Left or Right
char associativity(char c) {
    if (c == '^')
        return 'R';
    return 'L'; // Default to left-associative
}
    string infixToPostfix(string s) {
        stack<char>st;
        string ans="";
        
        for(int i=0;i<s.length();i++){
            char c=s[i];
            
            if(c>='a' && c<='z' || c>='A' && c<='Z' || c>='0' && c<='9'){
                ans+=c;
            }
            else if(c=='('){
                st.push(c);
            }
            else if(c==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();//pop '('
            }
            else{
                while(!st.empty() && prec(c) <= prec(st.top())){
                          ans+=st.top();
                          st.pop();
                    }
                st.push(c);//push operators
            }
        }
          while(!st.empty()){
             ans+=st.top();
             st.pop();
           }
        return ans;
    }
    
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends