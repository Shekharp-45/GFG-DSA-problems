//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        int n=arr.size();
        vector<int>Lsmaller(n,0);
        vector<int>Rsmaller(n,0);
        
        stack<int>s;
        s.push(0);
        for(int i=0;i<n;i++){
            int curr=arr[i];
            
            while(s.top()>=curr){
                s.pop();
            }
            Lsmaller[i]=s.top();
            s.push(curr);
         }
        
        stack<int>st;
        st.push(0);
         for(int i=n-1;i>=0;i--){
            int curr=arr[i];
            
            while(st.top()>=curr){
                st.pop();
            }
            Rsmaller[i]=st.top();
            st.push(curr);
         }

    
        int maxi=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,abs(Lsmaller[i]-Rsmaller[i]));
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends