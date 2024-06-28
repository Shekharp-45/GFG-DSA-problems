//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   
   bool cheak(string &temp){
       int i=0;
       int j=temp.length()-1;
       while(i<j){
           if(temp[i]!=temp[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
   }

    string pattern(vector<vector<int>> &arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<n;j++){
                temp+=to_string(arr[i][j]);
            }
            if(cheak(temp)){
                string ans=to_string(i);
                ans+=" R";
                return ans;
            }
        }
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=0;j<n;j++){
                temp+=to_string(arr[j][i]);
            }
            if(cheak(temp)){
                string ans=to_string(i);
                ans+=" C";
                return ans;
            }
        }
        return "-1" ;
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends