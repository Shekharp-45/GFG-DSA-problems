//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

 bool comp(const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
}

class Solution {
  public:

int minRemoval(vector<vector<int>>& intervals) {
    if (intervals.empty()) return 0;

    sort(intervals.begin(), intervals.end(), comp);
    int currEnd = intervals[0][1];
    int del = 0;

    for (int i = 1; i < intervals.size(); i++) {
        if (currEnd > intervals[i][0]) {
            del++;
        } else {
            currEnd = intervals[i][1];
        }
    }
    return del;
}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends