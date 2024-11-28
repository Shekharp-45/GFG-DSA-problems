//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
          int n=s1.size()-1;
        int m=s2.size()-1;
        int carry=0;
        string temp;
        while(n>=0 && m>=0)
        {
            int num1=s1[n]-'0';
            int num2=s2[m]-'0';
            int total=num1+num2+carry;
            if(total==1)
            {
                carry=0;
                temp='1'+temp;
            }
            else if(total==2)
            {
                carry=1;
                temp='0'+temp;
            }
            else if(total==3)
            {
                carry=1;
                temp='1'+temp;
            }
            else
            {
                carry=0;
                temp='0'+temp;
            }
            n--;
            m--;
        }
        while(n>=0)
        {
            int total=s1[n]-'0'+carry;
            if(total==1)
            {
                carry=0;
                temp='1'+temp;
            }
            else if(total==2)
            {
                carry=1;
                temp='0'+temp;
            }
            else
            {
                carry=0;
                temp='0'+temp;
            }
            n--;
        }
        while(m>=0)
        {
            int total=s2[m]-'0'+carry;
            if(total==1)
            {
                carry=0;
                temp='1'+temp;
            }
            else if(total==2)
            {
                carry=1;
                temp='0'+temp;
            }
            else
            {
                carry=0;
                temp='0'+temp;
            }
            m--;
        }
        if(carry)
        {
            temp='1'+temp;
        }
        string ans;
        int index=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]=='1')
            {
                index=i;
                break;
            }
        }
        for(int i=index;i<temp.size();i++)
        {
            ans+=temp[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends