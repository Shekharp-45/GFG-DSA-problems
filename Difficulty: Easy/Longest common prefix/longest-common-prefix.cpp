//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<int> longestCommonPrefix(string s1, string s2){
        int n=s1.length();
        int i=0;
        string ans="";
        while(i<n) 
        {
            ans.push_back(s1[i]);
            if(s2.find(ans)!=string::npos)//npos menas not match dound i.e like mp.end()
            {//s2 mde s1[i] present asel tr i++
                i++;
            }
            else
                break;
        }
        if(i==0)
            return {-1,-1};

        return {0,i-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1>> str2;
        Solution ob;
        vector<int> p;
        p = ob.longestCommonPrefix(str1,str2);
        if(p[0]==-1)
        cout<<"-1\n";
        
        else
        cout<<p[0]<<" "<<p[1]<<"\n";
    }
    return 0;
}

// } Driver Code Ends