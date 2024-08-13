//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    vector<vector<int>> ans;
    void solve(vector<int>& candidates, int target, vector<int>& v, int idx) {
        if (target == 0) {
            ans.push_back(v);
        }
        if (idx == candidates.size())
            return;

        while (idx < candidates.size() && target-candidates[idx]>=0) {
            v.push_back(candidates[idx]);
            solve(candidates, target - candidates[idx], v, idx);
            idx++;
            v.pop_back();
        }

    }
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        vector<int> v;
        // sort becoz we want answers in asending order
        sort(candidates.begin(), candidates.end());
        // remove duplicate cndidate becoz we dont want same answers in ans vec
        // new way to remove duplicate
        set<int> s(candidates.begin(), candidates.end());
        candidates.assign(s.begin(), s.end());
        // call solve function
        solve(candidates, target, v, 0);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	
// } Driver Code Ends