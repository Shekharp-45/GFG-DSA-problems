//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
         int tail=0,head=0,ans=INT_MIN;
        unordered_map<char,int>mp;
        for(head=0;head<s.size();head++){
            while(mp[s[head]]>0){//
                ans=max(ans,head-tail);
                mp[s[tail]]--;
                tail++;
            }
            mp[s[head]]++;
        }//all unique char ale tr while loop not run So ans is taken last
        ans=max(ans,head-tail);//teva head last la & tail 1st la asto 
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends