//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int t[1001][1001];
    int solve(string &s,int i, int j){
        if(i>=j){
            return 1;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(s[i]==s[j]){
            return t[i][j]=solve(s,i+1,j-1);
        }
        
        return t[i][j]= 0;
        
    }
    string longestPalin (string s) {
        int maxlen=0,startPoint=0;
        memset(t,-1,sizeof(t));
        
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(solve(s,i,j)==true){
                    if(j-i+1>maxlen){
                        maxlen=j-i+1;
                        startPoint=i;
                    }
                }
            }
        }
        return s.substr(startPoint,maxlen);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends