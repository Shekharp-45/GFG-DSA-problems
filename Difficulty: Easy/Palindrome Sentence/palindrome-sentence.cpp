//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    
	    string result="";
	    for(char &ch:s){
	       if(ch>='a'&&ch<='z'){
            result+=ch; 
         }
	    }
	    int i=0;
	    int j=result.length()-1;
	    
	    while(i<=j){
	        if(result[i]!=result[j]){
	            return false;
	        }
	        i++;
	        j--;
	    }
	    return true;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends