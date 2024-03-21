//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    Node* solve(int in[],int pre[], int start, int end, int &idx){
        if(start>end){
            return NULL;
        }
        int rootval=pre[idx];
        int i;
        for(i=start;i<=end;i++){
            if(in[i]==rootval){
                break;
            }
        }
        idx++;
        
        Node* root=new Node(rootval);
        root->left=solve(in,pre,start,i-1,idx);
        root->right=solve(in,pre,i+1,end,idx);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int idx=0;
        return solve(in,pre,0,n-1,idx);
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends