//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // int CountPS(char s[], int n);

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
// int N;
// cin >> N;
// char S[N + 1];
// cin >> S;
// Solution ob;
//         cout << ob.CountPS(S, N) << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function Template for C++

class Solution {
  public:
     int t[1001][1001];
    int solve(char s[],int i, int j){
//instead of dp we also use palindrome check with bool isPalindrome??
        if(i>=j){//but dp+memo will not solve repeated steps in the tree Dig. 
            return 1;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(s[i]==s[j]){
            return t[i][j]=solve(s,i+1,j-1);
        }
        return t[i][j]= 0;
    }

    int CountPS(char s[], int n) {
         int cnt=0;
        memset(t,-1,sizeof(t));
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(solve(s,i,j)==true){
                    cnt++;
                }
            }
        }
        return cnt;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        char S[N + 1];
        cin >> S;
        Solution ob;
        cout << ob.CountPS(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends