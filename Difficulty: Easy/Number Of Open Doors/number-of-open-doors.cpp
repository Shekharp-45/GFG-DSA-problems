//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int noOfOpenDoors(long long N) {
//To find the number of open doors, we just need to count all perfect squares up to 𝑁
        return static_cast<int>(sqrt(N));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.noOfOpenDoors(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends