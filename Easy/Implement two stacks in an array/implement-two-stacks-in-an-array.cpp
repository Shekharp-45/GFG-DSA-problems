//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks
{
    public:

    
    
    
        int size=100;
        int arr[100];
        int top1=-1,top2=-2;
    
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1<size-2){
            top1+=2;
            arr[top1]=x;
        }
    }
    
    //Function to push an integer into the stack2.
    void push2(int x)
    {
       if(top2<size-2){
            top2+=2;
            arr[top2]=x;
        }
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1==-1){
            return -1;
        }
        int a=arr[top1];
        top1-=2;
        return a;
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(top2<0){
          return -1;
       }
       int b= arr[top2];
       top2-=2;
       return b;
    }
//Its basicaly the implementation of stack only difference is 
// create two pointers top1 =-2 and top2 =-1;
// for push->
// do top1+=2;(store stack1 in all even indexes)
// do top2+=2;(store stack2 in all odd indexes);
// similarly for pop method .
};



//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends