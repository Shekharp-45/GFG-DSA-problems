//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      int largest=i;//consider root is largest
      int left=2*i+1;
      int right=2*i+2;
      
      if(left<n && arr[left]>arr[largest])largest=left;
      //left<n becoz left node present nsel tr process krnar ny pude
      if(right<n && arr[right]>arr[largest])largest=right;
      
      //jr largest sapdla from left or right
      if(largest!=i){
          swap(arr[largest],arr[i]);
          heapify(arr,n,largest);//call function on child which get distrubted by swap
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // leaf node alrready max heap mde astet so start process from non-leaf node
    //i.e  (no. of node-1)-1/2;
    //no. of node-2/2;   it will give non leaf node
    
      for(int i=(n-2)/2;i>=0;i--){
          heapify(arr,n,i);
       }
    
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        
        
        //max heap zal ki max ele last ele ne swap krne and prt heapify call from 0 idx
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]);//1st with last
            heapify(arr,i,0);//i-- zalela asto so used i swap ntr last ele consider krt ny
        }//becoz last ele sorted position mde asto
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends