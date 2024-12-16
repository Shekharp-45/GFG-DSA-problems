//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& arr1, vector<int>& arr2, int k) {
         vector<int>ans;
        int i=0;
        int j=0;
        int n=arr1.size();
        int m=arr2.size();
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                 ans.push_back(arr1[i++]); 
            }else{
                 ans.push_back(arr2[j++]); 
            }
        }
        while(i<n){
             ans.push_back(arr1[i++]); 
        }
        while(j<m){
             ans.push_back(arr2[j++]); 
        }
        
        return ans[k-1];
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends