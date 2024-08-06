//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            int n=s.length();
            int cntDot=0;
            //cheak weather 3 dots or not
            for(int i=0;i<n;i++){
                if(s[i]=='.')cntDot++;
            }
            if(cntDot!=3){
                return 0;
            }
            //add 0 to 255 in set
            unordered_set<string>st;
            for(int i=0;i<256;i++){
                st.insert(to_string(i));
            }
            //now cheak before dot (.)a digit is in rage or not
            int counter=0;
            string temp="";
            for(int i=0;i<n;i++){
                if(s[i]!='.'){
                    temp+=s[i];
                }
                else{
                    if(st.count(temp)!=0)counter++;
                    
                    temp="";
                }
            }
            //3rd dot( . )ntr che digit else part mde cheak honar ny
            //because of i ha out of bound zalela asto so cheak for it here
            if(st.count(temp)!=0)counter++;
            
            if(counter==4){
                return 1;
            }
            return 0;
            
        }
};


//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends