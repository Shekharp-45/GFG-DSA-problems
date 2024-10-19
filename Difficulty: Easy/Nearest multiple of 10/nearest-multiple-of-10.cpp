//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        int n=str.length();
        //case 1: last digits are from 0 to 5
        if(str[n-1] <= '5'){
            str[n-1]='0';
            return str;
        }
        //case 2:when 6 to 9 is there in last digit 
        str[n-1]='0';
        int i=n-2;
        while(i>=0 && str[i]=='9'){
            str[i]='0';
            i--;
        }
        //case 3: when digit is 999
        if(i<0){
            str='1'+str;
        }else{
            str[i]++;//129 asel mg 120 zal mg 2 la 3 krne ans=130
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends