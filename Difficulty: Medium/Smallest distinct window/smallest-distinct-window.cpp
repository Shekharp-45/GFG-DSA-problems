//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        set<int>st;
        for(char &it:str){
            st.insert(it);
        }
        int Uniqe_char=st.size();
        int i=0,j=0,Minlen=INT_MAX;
        unordered_map<char,int>mp;
        while(j < str.length()){
            mp[str[j]]++;
            while(mp.size()==Uniqe_char){
                Minlen=min(Minlen, j-i+1);
                mp[str[i]]--;
                if(mp[str[i]]==0){
                    mp.erase(str[i]);
                }
                i++;
            }
            
            j++;
        }
        return Minlen;
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
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends