//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        //as per base case
        if((9*d)<s)return "-1";
        
        string ans="";
        //fill the ans from last to first
        for(int i=d-1;i>=0;i--){
            //at last add greater value if it is > than S
            if(s>9){
                ans='9'+ans;
                s-=9;
            }else{
                //if we are on at idx 0 then put entire value of S 
                if(i==0){
                    ans=to_string(s)+ans;
                }else{
                    //else put a smaller value which is obviously less than 9
                    //coz if it > 9 then we cought by 1st if condition 
                    ans=to_string(s-1)+ans;
                    //till i=1 add 0's
                    i--;
                    while(i>0){
                        ans='0'+ans;
                        i--;
                    }
                    //then finally add 1 at start to get minimum answer
                    ans='1'+ans;
                    break;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends