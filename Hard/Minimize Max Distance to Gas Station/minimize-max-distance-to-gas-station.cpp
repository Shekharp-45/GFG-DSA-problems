//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool cheak(double mid,vector<int> &stations, int k){
        int n=stations.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            int dist=stations[i]-stations[i-1];
            if(dist<=mid){
                continue;
            }else{
                cnt+=int(dist/mid);
            }
        }
        return cnt<=k;//true or false
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        int n=stations.size();
        double low=0.0;
        double high=0.0;
        
        for(int i=1;i<n;i++){
            if(high<stations[i]-stations[i-1]){
                high=stations[i]-stations[i-1];
            }
        }
        double ans=high;
            while(high-low>1e-9){
                double mid= (high-low)/2.0 + low;
                if(cheak(mid,stations,k)){
                    ans=mid;
                    high=mid;
                }else{
                    low=mid;
                }
            }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
    }
    return 0;
}
// } Driver Code Ends