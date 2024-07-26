//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseTheSpiral( vector<int>&ans){
        stack<int>st;
        for(int i=0;i<ans.size();i++){
            st.push(ans[i]);
        }
         vector<int>ReverseAns;
         while(!st.empty()){
             ReverseAns.push_back(st.top());
             st.pop();
         }
         return ReverseAns;
    }
    vector<int> reverseSpiral(int m, int n, vector<vector<int>>&matrix)  {
        vector<int>ans;
        int left=0,right=n-1;
        int top=0, bottom=m-1;
        
        while(top<=bottom && left<=right){
            // Print top row from left to right
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            
            // Print right column from top to bottom
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            
            // Print bottom row from right to left (if exists)
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            
            // Print left column from bottom to top (if exists)
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }
      return reverseTheSpiral(ans);

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends