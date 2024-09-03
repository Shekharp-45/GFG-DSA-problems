//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int t[1001][1001];
	int LCS(string str1, string str2,int n,int m){
	    if(n==0 || m==0)return t[m][n]=0;
	    
	    if(t[m][n]!=-1){
	        return t[m][n];
	    }
	    //last ele are same then 1+solvez9further
	    if(str1[n-1]==str2[m-1]){
	        return t[m][n]=1+LCS(str1,str2,n-1,m-1);
	    }
	    else{//same nahit then choose any of them
	     return t[m][n]=max(LCS(str1,str2,n-1,m),LCS(str1,str2,n,m-1));
	    }
	}
	int minOperations(string str1, string str2) 
	{ 
	    int n=str1.size();
	    int m=str2.size();
	    memset(t,-1,sizeof(t));
	    return m+n - 2*LCS(str1,str2,n,m);//this is simple LCS ch code add some code and give u the answer
	    //eg str1 = "heap", str2 = "pea"
	    //n=4 & m=3  LCS=2 (i.e -->ea)
	    //ans--> 4+3 - 2*2   =>3
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends