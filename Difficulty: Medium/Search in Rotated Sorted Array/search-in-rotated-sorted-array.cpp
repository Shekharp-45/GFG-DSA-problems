//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   int pivotIndex(vector<int>& arr,int l,int h){
       int s=l;
       int e=h;
       int mid=s+(e-s)/2;

       while(s<=e){
        if(s==e)
        return s;
        if(mid+1<=h && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(mid-1>=0 && arr[mid-1]>arr[mid]){
            return mid-1;
        }
        else if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else 
        s=mid+1;
        mid=s+(e-s)/2;
       }
       return -1;  
   }
    
    
    //binary search 
   int binarySearch(vector<int>& nums,int s,int e,int target){
       
      int mid=s+(e-s)/2;

      while(s<=e){
     if(nums[mid]==target){
         return mid;
     }
     else if(nums[mid]<target ){
        s=mid+1;
     }
     else
     e=mid-1;
     mid=s+(e-s)/2;
      }
      return -1;
   }
    int search(vector<int>& arr, int key) {
         int s=0;
        int ans=-1;
        int e=arr.size()-1;
    int pivot=pivotIndex(arr,s,e);
    if(arr[pivot]>=key && key >= arr[s]){
        ans=binarySearch(arr,s,pivot,key);
    }
    else
     ans=binarySearch(arr,pivot+1,e,key);
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends