//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str){
        unordered_map<char,int>m;
        int len=0;
        for(auto ch:str) m[ch]++;
        
        for(auto x:m) m[x.first]=0,len++;
        
        int j=0,i=0,count=0;
        int ans=INT_MAX;
        while(i<str.length()){
            m[str[i]]++;
            if(m[str[i]]==1) count++; 
            while(count==len){
                m[str[j]]--;
                
                if(m[str[j]]==0) count--;
                ans=min(ans,i-j+1);
                j++;
            }
            i++;
        }
        return ans;  
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends