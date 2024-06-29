//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        sort(a,a+n);
        long int smallele=INT_MAX;
        long  sum=0;
        
        for(int i=0;i<n;i++){
            if(k!=0 && a[i]<0){
                a[i]=-a[i];
                k--;
            }
            sum+=a[i];
            long int x=abs(a[i]);
            smallele=min(smallele,x);
        }
        if(k>0 && k%2==1){
            sum-=2*smallele;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}
// } Driver Code Ends