//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string s) {
        int i=0;
        vector<int>ans;
        stack<int>st;
        int cntBrcket=1;
        while(i<s.length()){
            if(s[i]=='('){
                st.push(cntBrcket);
                ans.push_back(cntBrcket);
                cntBrcket++;
            }else if(s[i]==')'){
                int x=st.top();
                ans.push_back(x);
                st.pop();
            }
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends