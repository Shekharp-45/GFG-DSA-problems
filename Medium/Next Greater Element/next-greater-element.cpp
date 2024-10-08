//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>ans(n,-1);//ans arr with -1
        stack<long long>st;
        st.push(-1);
        st.push(arr[n-1]);//we want to traverse from left to right so from last to i=0
        
        for(int i=n-2;i>=0;i--){
            long long curr=arr[i];
            
            while(st.top()<=curr && st.top()!=-1){
                st.pop();
            }
            ans[i]=st.top();
            st.push(curr);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends