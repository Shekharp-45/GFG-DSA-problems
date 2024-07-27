//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        string ans="";
        for(int i=0;i<str.length();i++){
            if(str[i]=='b'){
                continue;
            }else if(str[i]=='a' && str[i+1]=='c'){
                i++;
                continue;
            }else{
                ans+=str[i];
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends