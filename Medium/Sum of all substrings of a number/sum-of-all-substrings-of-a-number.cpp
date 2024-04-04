//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
       int modulo = 1000000007;
        int n = s.length();
        long result = 0;
        long multiplier = 1; 
        
        for (int i = n - 1; i >= 0; i--) {
            int digit = s[i] - '0'; 
            result = (result + (digit * multiplier * (i + 1)) % modulo) % modulo;
            multiplier = (multiplier * 10 + 1) % modulo; 
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends