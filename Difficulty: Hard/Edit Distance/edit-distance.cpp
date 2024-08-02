//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int t[101][101];//2D coz i & j are dynamic
    int solve(string &s1, string &s2 , int i, int j){
        if(i==s1.size())return s2.size()-j;//base case cross answer dene
        if(j==s2.size())return s1.size()-i;
        int ans=INT_MAX;
        //cheak repeated or not
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(s1[i]!=s2[j]){
            ans=min({ans,solve(s1,s2,i+1,j)+1,solve(s1,s2,i,j+1)+1,solve(s1,s2,i+1,j+1)+1});
        }else{
            return t[i][j]=solve(s1,s2,i+1,j+1);//same asel tr next la jane without adding +1 i.e ans
        }
        return t[i][j]=ans;
    }
    int editDistance(string s1, string s2) {
        memset(t,-1,sizeof(t));
        return solve(s1,s2,0,0);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends