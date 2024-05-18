//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        stack<int>st;
        int mid  =  floor((sizeOfStack)/2) ;
        int i=1;
        while(i <= mid)
            {
                 st.push(s.top());
                s.pop();
                i++;
            }
            s.pop();
            while(!st.empty())
            {
                s.push(st.top());
                st.pop();
            }
    }
    
    /*
    temp stack ghene find the middle of stack
    orginial stack mdle ele temp mde push karne till mid-1 and also carry a i ptr
    after i++ it will equal to mid then pop the main element from mid
    then reFill the value from temp stack to main stack
    */
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends