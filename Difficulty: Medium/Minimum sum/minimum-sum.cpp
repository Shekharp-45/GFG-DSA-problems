//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string stringtoint(const string &num1,const string &num2){
         int carry = 0;
        string result = "";
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        
        // Add the digits from the end to the beginning
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            carry = sum / 10;
            result += to_string(sum % 10);
        }
        
        // Reverse the result string
        reverse(result.begin(), result.end());
        
        return result;
    }
    
    string solve(int arr[], int n) {
        sort(arr,arr+n);
        string num1="";
        string num2="";
        for(int i=0;i<n;i++){
            if(i%2==0){
                num1+=to_string(arr[i]);
            }else{
                num2+=to_string(arr[i]);
            }
        }
        string ans = stringtoint(num1, num2);
         // Remove leading zeros
        ans.erase(0, ans.find_first_not_of('0'));
        
        // If the result is empty after removing zeros, it means the result was zero
        if (ans.empty()) {
            ans = "0";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends