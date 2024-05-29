//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void insertAtBottom(std::stack<int>& stk, int element) {
    if (stk.empty()) {
        stk.push(element);
    } else {
        int topElement = stk.top();
        stk.pop();
        insertAtBottom(stk, element);
        stk.push(topElement);
    }
}    
    //main function
    void Reverse(stack<int> &stk){
        
        if (!stk.empty()) {
           int topElement = stk.top();
           stk.pop();
           Reverse(stk);
           insertAtBottom(stk, topElement);
        }
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends