//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    void reorderList(Node* head) {
        if (!head || !head->next || !head->next->next) return;

        // Find the middle of the list
        Node *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow=slow->next;
            fast=fast->next->next;
        }

        // Reverse the second half of the list
        Node *prev =NULL,
         *curr=slow->next,
          *forward;
        while (curr) {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        slow->next=NULL;//1st half last node la null krne
        // Merge the 2 halves
        Node *A = head,
         *B=prev;//prev refer to 2nd half cha head
        while (A && B) {
            Node* A_next=A->next;
            Node *B_next=B->next;

            A->next=B;
            B->next=A_next;

            A=A_next;
            B=B_next;
        }
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends