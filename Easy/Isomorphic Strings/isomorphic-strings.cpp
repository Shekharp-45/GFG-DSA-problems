//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        int n = str1.length();
        int m = str2.length();
        
        if (n != m) return false;
        
        map<char, char> m1, m2;
        
        for (int i = 0; i < n; i++)
        {
            //i=0  'a' not in m1 && 'x' not in m2
            if (m1.find(str1[i]) == m1.end() && m2.find(str2[i]) == m2.end())
            {
                m1[str1[i]] = str2[i];//a & x chi jodi in map {a,x}
                m2[str2[i]] = str1[i];//x & a chi jodi in map {x,a}
            }
            else if (m1[str1[i]] != str2[i])//ja mapping vegli zali asel tr false
            {
                return false;
            }
        }
        
        return true;
        
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends