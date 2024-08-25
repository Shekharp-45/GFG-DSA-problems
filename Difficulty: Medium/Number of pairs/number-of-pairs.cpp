//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        int M = arr.size(), N = brr.size();
        vector<float>x(M),y(N); 
       
        for(int i=0; i<M; i++)
           x[i]=(log2(arr[i]))/arr[i]; 
           
        for (int i=0; i<N; i++)
            y[i]=(log2(brr[i]))/brr[i]; 
        
        sort(x.begin(),x.end()); 
        sort(y.begin(),y.end()); 
       
        long long ans = 0; 
        for(int i=0; i<N; i++){
            auto it = upper_bound(x.begin(),x.end(),y[i]); 
            if(it!=x.end())
                ans+=M-(int)(it-x.begin());  
        } 
        return ans; 
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends