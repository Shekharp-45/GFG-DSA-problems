//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
         vector<int>primes(n+1,1);
        primes[0]=0;
        primes[1]=0;
        for(int i=2;i<=n;i++){
            if(primes[i]==0) continue;
            for(int j=2;j*i<=n;j++){
                primes[j*i]=0;
            }
        }
        
        for(int i=0;i<=n/2;i++){
            int j=n-i;
            if(primes[i] && primes[j]){
                return {i,j};
            }
        }
        return {-1,-1};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends