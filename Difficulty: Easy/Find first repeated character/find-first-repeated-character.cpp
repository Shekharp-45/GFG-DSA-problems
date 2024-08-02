//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    unordered_map<char,int>mp;
    int n=s.length();
    string x="";
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]>1){
             x+=s[i];
            return x;
        }
    }
    return "-1";
}