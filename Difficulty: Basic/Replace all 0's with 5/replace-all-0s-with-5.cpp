//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*you are required to complete this method*/
class Solution {
  public:
  int toInt(string number){
    int i = 0;

    // Traversing string
    for (char c : number) {
        // Checking if the element is number
        if (c >= '0' && c <= '9') {
            i = i * 10 + (c - '0');
        }
    }
    return i;

  }
    int convertFive(int n) {
        if(n==0){
            return 5;
        }
        int num=n;
        string ans="";
        while(num>0){
            int rem=num%10;
            if(rem==0){
                ans+='5';
            }else{
                ans+=to_string(rem);
            }
            num/=10;
        }
        reverse(ans.begin(),ans.end());
        
        int res=toInt(ans);
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends