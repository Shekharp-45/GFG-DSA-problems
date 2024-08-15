//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

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

class Solution {
  public:
   Node *reverse(Node *head){
       Node* curr=head,*prev=NULL,*forward=NULL;
       
       while(curr!=NULL){
           forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
       }
       return prev;
   }
    Node* addOne(Node* head) {
        head=reverse(head);
        
        Node* curr=head,*prev=head;
        
        int sum=curr->data+1;
        curr->data=sum%10;
        int carry=sum/10;
        curr=curr->next;
        
        while(curr!=NULL){
            sum=curr->data+carry;
            curr->data=sum%10;
            carry=sum/10;
            prev=curr;
            curr=curr->next;
        }
        if(carry!=0){//when LL is 999 shevat la carry 1 rahtoch so create new node
            prev->next=new Node(carry);
        }
        head=reverse(head);
        
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends