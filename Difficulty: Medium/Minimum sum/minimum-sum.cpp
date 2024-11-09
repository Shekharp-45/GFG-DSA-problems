//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
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
    string minSum(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int i=0;
        int n=arr.size();
        while(i<n){
            if(arr[i]==0){
                i++;
            }
            else{
                break;
            }
        }
        string oddsum="",evensum="";
        for(;i<n;i++){
            if(i%2==0){
                evensum+=to_string(arr[i]);
            }else{
                oddsum+=to_string(arr[i]);
            }
        }
        string ans = stringtoint(evensum, oddsum);
        
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
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends