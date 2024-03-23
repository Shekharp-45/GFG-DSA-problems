//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        long long total_sum = 0;
        for (int i = 0; i < n; i++) {
            total_sum += a[i];
        }
        
        long long Leftsum = 0;
        for (int i = 0; i < n; i++) {
            if (Leftsum == total_sum - a[i]) {
                return i + 1; // Indexing starts from 1
            }
            Leftsum += a[i];//left sum add krt jane
            total_sum -= a[i];//total sum minus krt jane till to het ans
        }
        
        return -1;
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends