//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
 
    int rotateDelete(vector<int> &arr) {
         int k = 1;
        
        while(arr.size() > 1){
            arr.insert(arr.begin(),arr[arr.size()-1]);//add last ele to begin
            arr.pop_back();//remove last ele
            
            int remove_ind = arr.size()-k;
            
            if(remove_ind < 0){
                remove_ind = 0;
            }
            arr.erase(arr.begin()+remove_ind);
            k++;
        }
        return arr[0]; 
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends