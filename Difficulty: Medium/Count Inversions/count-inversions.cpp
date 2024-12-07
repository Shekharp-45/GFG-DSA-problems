//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    
    int Merge(vector<int>& arr, int l, int mid, int r) {
    int i = l, j = mid + 1, k = 0;
    int count = 0;
    vector<int> temp(r - l + 1);

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += (mid - i + 1); 
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= r) temp[k++] = arr[j++];

    for (i = l, k = 0; i <= r; i++, k++) {
        arr[i] = temp[k];
    }

    return count;
}

int mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;
    int mid = left + (right - left) / 2;

    int leftInversions = mergeSort(arr, left, mid);
    int rightInversions = mergeSort(arr, mid + 1, right);
    int mergeInversions = Merge(arr, left, mid, right);

    return leftInversions + rightInversions + mergeInversions;
}

int inversionCount(vector<int>& arr) {
    return mergeSort(arr, 0, arr.size() - 1);
}
    
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends