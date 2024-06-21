//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string s) {
        int i=0,n=s.length();
        double a=0,b=0,c=0,d=0;
        
        while(s[i]!='/'){
            a=a*10+(s[i]-'0');
            i++;
        }
        i++;//for skip "/"
        while(s[i]!=','){
            b=b*10+(s[i]-'0');
            i++;
        }
        i+=2;//to skip "," & " "space
        while(s[i]!='/'){
            c=c*10+(s[i]-'0');
            i++;
        }
        i++;
        while(i<n){
            d=d*10+(s[i]-'0');
            i++;
        }
        //convert this abcd to string as a/b & c/d
        string x=to_string(int(a))+'/'+to_string(int(b));
        string y=to_string(int(c))+'/'+to_string(int(d));
        
        if(a/b==c/d) return "equal";
        else if(a/b > c/d) return x;
        else return y;
        
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends