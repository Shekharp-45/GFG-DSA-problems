//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
     int low=0;
    int high=n-1;
   while(low<=high)
   {
       int mid=(low+high)/2;
     //2 condn i.e 
     //1st is mid =0 || mid !=mid-1     && mid =n-1 || mid!=mid+1
    if((mid==0 || arr[mid]!=arr[mid-1] )&&( mid==n-1 or arr[mid]!=arr[mid+1]))
    {
        return arr[mid];    
    }
    //2 codn
    //mid%2==0 then mid==mid+1 asyla hawa || mid%2!=0 then mid=mid-1 asaya hawa
    else if((mid%2==0 and arr[mid]==arr[mid+1]) || (mid%2!=0 and arr[mid]==arr[mid-1]))
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
}
return -1;
}
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t, len;
    cin >> t;
    while (t--) {
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.search(len, arr) << '\n';
    }
    return 0;
}

// } Driver Code Ends