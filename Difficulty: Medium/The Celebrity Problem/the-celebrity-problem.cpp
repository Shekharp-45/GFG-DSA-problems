//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int n=mat.size();
        int idxColm = 0;
        //row idx where 1 is present
    	for(int i = 0; i < n; i++) {
    	    if(mat[idxColm][i] == 1) {
    	        idxColm = i;
    	    }
    	}

        //cheak for false cases then return -1
    	for(int i = 0; i < n; i++) {
    	    if(i != idxColm && (mat[idxColm][i] == 1 || mat[i][idxColm] == 0)) {
    	        return -1;
    	    }
    	}
    	
    	return idxColm;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends