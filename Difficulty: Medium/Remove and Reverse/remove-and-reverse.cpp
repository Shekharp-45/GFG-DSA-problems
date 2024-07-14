//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
      string removeReverse(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        
        for(int i=0;i<n;i++)
            mp[s[i]]++;
            
        bool front=true;
        int count=0;
        int start=0;
        int end = n-1;
        
        while(start <= end) {
            if(front) {
                if(mp[s[start]] > 1) {
                    mp[s[start]]--;
                    count++;
                    front = false;
                    s[start] = '#';
                }
                start++;
            } else {
                if(mp[s[end]] > 1) {
                    mp[s[end]]--;
                    count++;
                    front = true;
                    s[end] = '#';
                }
                end--;
            }
        }
        
        string ans="";
        
        for(int i=0;i<n;i++) {
            if(s[i] != '#')
                ans.push_back(s[i]);
        }
        
        if(count&1)
            reverse(ans.begin(), ans.end());
            
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends