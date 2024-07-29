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


int longestSubstrDistinctChars (string S)
{
    int n=S.length();
    int ans=0;
    
    for(int i=0;i<n;i++){
        //need to cheak for each char from starting
        vector<bool>Visited(256);
        
        for(int j=i;j<n;j++){
            if(Visited[S[j]]==true){
                break;
            }else{
                ans=max(ans,j-i+1);
                Visited[S[j]]=true;
            }
        }
        //remove the first element from substr 
        //we got ans where sybstr start from that ele
        //but we want max ans so need to iterate all the ele
        Visited[S[i]]=false;
    }
    return ans;
}