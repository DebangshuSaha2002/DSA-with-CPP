// /**
//  * Definition for singly-linked list.
//  * class Node {
//  * public:
//  *     int data;
//  *     Node *next;
//  *     Node() : data(0), next(nullptr) {}
//  *     Node(int x) : data(x), next(nullptr) {}
//  *     Node(int x, Node *next) : data(x), next(next) {}
//  * };
//  */

// Node* kReverse(Node* head, int k) {
//     if(head==NULL){
//         return NULL;
//     }

//     Node * curr=head;
//     Node * prev=NULL;
//     Node * next=NULL;
//     int count=0;

//     Node * temp=head;
//     int NodeCount=0;
//     while(temp!=NULL){
//         NodeCount++;
//         temp=temp->next;
//     }

//     if(NodeCount<k){
//         return head;
//     }

//     while(curr!=NULL && count<k){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//         count++;
//     }

//     if(next!=NULL)
//         head->next=kReverse(next, k);

//     return prev;
// }