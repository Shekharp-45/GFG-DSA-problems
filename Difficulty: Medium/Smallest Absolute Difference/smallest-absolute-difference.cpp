//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
int kthDiff(int a[], int n, int k);

// Driver code
int main() {
    int t, i;
    int k;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;

        cout << kthDiff(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends


 int sliding(int nums[], int diff, int n){
        int cnt=0;
        int j=0;
        //sliding window 1 2 5 10   
        // j will const is windows nums[i]-nums[j] > diff then j++
        //else continue the i++ ans store the counts of pairs whose diff<=nums[i]-nusm[j]
        for(int i=1;i<n;i++){
            while(nums[i]-nums[j] > diff){
                j++;
            }
            cnt+=(i-j);
        }
        return cnt;
    }
int kthDiff(int nums[], int n, int k)
{
    sort(nums,nums+n);
        int high=nums[n-1];//last digit after sort
        int low=INT_MAX;
        for(int i=1;i<n;i++){//for low find lowest from adjecent pair
            if(nums[i]-nums[i-1]<low){
                low=nums[i]-nums[i-1];
            }
        }
       //ex-->  1 2 5 10      low=1, high=9 mid=5
        while(low < high){
            int mid=(low+high)/2;

            int Num_of_Pairs_formed_by_mid=sliding(nums,mid,n);//mid=5 
        // Num_of_Pairs_formed_by_mid=4 when mid=5 we want kth ele 5 so mid=5 cant be answer
            if(Num_of_Pairs_formed_by_mid < k){//4<5 so low incremented
                low=mid+1;
            }else{
        //when mid=8 then Num_of_Pairs_formed_by_mid=5 so k is also 5 so mid might be answer
                high=mid;
            }
        }
        return low;
}