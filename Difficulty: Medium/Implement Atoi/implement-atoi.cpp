//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
         if (s == NULL) return 0;

    int i = 0;
    while (s[i] == ' ') {
        i++;
    }

    int sign = 1;
    if (s[i] == '-' || s[i] == '+') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    long nums = 0;
    while (s[i] && isdigit(s[i])) {
        nums = nums * 10 + (s[i] - '0');

        // overflow and underflow conditions
        if (sign == 1 && nums > INT_MAX) {
            return INT_MAX;
        }
        if (sign == -1 && -nums < INT_MIN) {
            return INT_MIN;
        }
        i++;
    }

    return (int)(nums * sign);
  }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends