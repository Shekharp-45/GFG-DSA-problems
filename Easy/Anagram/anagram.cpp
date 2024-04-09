//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
         unordered_map<char,int>m;
        for(char i: a){
            m[i]++;
        }
        
        for(char it:b){
            if (m.find(it) ==m.end() || m[it] == 0)//mp[it] nsel tr false or cnt =0 asel tr
            return false;
            
           //otherwise aahe to b mde so doghach ek count-- 
            m[it]--;
        }
        return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends