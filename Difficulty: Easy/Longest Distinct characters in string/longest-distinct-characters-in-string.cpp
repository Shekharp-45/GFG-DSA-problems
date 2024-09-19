//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
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
        return ans;//which return whole string

}