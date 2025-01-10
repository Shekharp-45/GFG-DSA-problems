//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &A, int k) {
        unordered_map<int,int> m;
        int n=A.size();
        vector <int> v;
        int count=0;
        for(int i=0;i<k;i++) m[A[i]]++;
        v.push_back(m.size());
        int j=0;
        for(int i=k;i<n;i++)
        {
            m[A[j]]--;
            if(m[A[j]]<=0) m.erase(A[j]);
            j++;
            m[A[i]]++;
            v.push_back(m.size());
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends