//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {

        int Totalsum=0,currSum=0,n=arr.size();
        
        for(int i=0;i<n;i++){
            Totalsum+=arr[i];
        }
        for(int i=0;i<n;i++){
            currSum+=arr[i];
            Totalsum-=arr[i];
            if(currSum==Totalsum){
                return true;
            }
        }
        
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends