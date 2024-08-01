//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
     bool isPallindeome(string &s, int i, int j){
        
        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
    string longestPalindrome(string S){
        int n=S.length();
        int maxLength=INT_MIN;
        int start=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                 if(isPallindeome(S, i, j)){
                    if(j-i+1 > maxLength){
                        start = i;
                        maxLength = j-i+1;
                    }
                }
            }
        }
        return S.substr(start, maxLength);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends