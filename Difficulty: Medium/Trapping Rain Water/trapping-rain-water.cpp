//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long  res=0;
        int lmax[n],rmax[n];
        //take initially first element as a max ele
        //left max left kdun cheak krt yene
        lmax[0]=arr[0];
        for(int i=1;i<n;i++){
            lmax[i]=max(arr[i],lmax[i-1]);
        }
        //take initially max as last element
        //right max right kdun cheak krt yene
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(arr[i],rmax[i+1]);
        }
        //atta 0th and last th ele sodun loop chalvne
        for(int i=1;i<n-1;i++){
            res+=(min(lmax[i],rmax[i])-arr[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends