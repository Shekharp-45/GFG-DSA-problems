//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
         int count = 0;
    int n = arr.size();

    for (int i = 0; i <= n - 3; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];

            if (currentSum > target) {
                right--; 
            } else if (currentSum < target) {
                left++; 
            } else {
                count++;

               
                int nextLeft = left + 1;
                while (nextLeft < right && arr[nextLeft] == arr[nextLeft - 1]) {
                    count++;
                    nextLeft++;
                }

                right--;
            }
        }
    }
    return count;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends