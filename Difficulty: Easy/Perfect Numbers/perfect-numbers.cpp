//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPerfectNumber(int n) {
        int sum=1;
        int val = abs(sqrt(n));
        for(int i=2;i<=val;i++){
            if(n%i==0){
                sum+=i;
                if(i != n / i){
                    sum += n / i;
                }
            }
        }
        if(sum==n){
            return true;
        }
        return false;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        bool ans = ob.isPerfectNumber(N);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends