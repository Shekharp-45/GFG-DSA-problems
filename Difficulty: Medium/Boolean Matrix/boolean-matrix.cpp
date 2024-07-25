//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int m=matrix.size();//row
        int n=matrix[0].size();//column
        vector<bool> rowFlag(m, false);
        vector<bool> colFlag(n, false);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if (matrix[i][j] == 1) {
                rowFlag[i] = true; // Mark this row
                colFlag[j] = true; // Mark this column
            }
            }
        }
        //Update the matrix based on the flags
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if (rowFlag[i] || colFlag[j]) {
                matrix[i][j] = 1;
              }  
            }
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends