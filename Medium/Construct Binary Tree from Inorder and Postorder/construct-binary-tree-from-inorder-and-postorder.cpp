//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}


// } Driver Code Ends
/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

class Solution
{
    public:
    Node* solve(int inorder[], int postorder[],int inStart,int inEnd,int postStart,int postEnd){
    if(inStart>inEnd){
        return NULL;
    }
    //cheak root in postorder
    Node* root=new Node(postorder[postEnd]);
    int i=inStart;
    for(;i<inEnd;i++){
        if(inorder[i]==root->data){
            break;
        }
    }
    int leftSize=i-inStart;
    int rightSize=inEnd-i;

     root->left=solve(inorder,postorder,inStart,i-1,postStart,postStart+leftSize-1);
     root->right=solve(inorder,postorder,i+1,inEnd,postEnd-rightSize,postEnd-1);

    return root;
}

    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int inorder[], int postorder[], int n) {
        int inStart=0;
        int inEnd=n-1;
        int postStart=0;
        int postEnd=n-1;

        return solve(inorder,postorder,inStart,inEnd,postStart,postEnd);
    }
};


//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Solution obj;
        Node* root = obj.buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends