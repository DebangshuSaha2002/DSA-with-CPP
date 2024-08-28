//https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>

// #include <iostream>
// #include <map>
// #include <sstream>
// #include <vector>
// using namespace std;

// /* Link list Node */
// struct Node {
//     int data;
//     Node *next;
//     Node *random;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         random = NULL;
//     }
// };

// void print(Node *root) {
//     Node *temp = root;
//     while (temp != NULL) {
//         int k;
//         if (temp->random == NULL)
//             k = -1;
//         else
//             k = temp->random->data;
//         cout << temp->data << " " << k << " ";
//         temp = temp->next;
//     }
// }

// void append(Node **head_ref, Node **tail_ref, int new_data) {
//     Node *new_node = new Node(new_data);
//     if (*head_ref == NULL) {
//         *head_ref = new_node;
//     } else {
//         (*tail_ref)->next = new_node;
//     }
//     *tail_ref = new_node;
// }

// bool validation(Node *head, Node *res) {
//     Node *temp1 = head;
//     Node *temp2 = res;

//     while (temp1 != NULL && temp2 != NULL) {
//         if (temp1->data != temp2->data)
//             return false;
//         if ((temp1->random == NULL && temp2->random != NULL) ||
//             (temp1->random != NULL && temp2->random == NULL) ||
//             (temp1->random != NULL && temp2->random != NULL &&
//              temp1->random->data != temp2->random->data))
//             return false;
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     return true;
// }


// } Driver Code Ends
/* Link list Node
struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};*/

// class Solution {
//   private:
//     void insertAtLL(Node * &head, Node * &tail, int d){
//         Node * newNode=new Node (d);
//         if(head!=NULL){
//             head=newNode;
//             tail=newNode;
//         }else{
//             tail->next=newNode;
//             tail=newNode;
//         }
//     }
    
//   public:
//     Node *copyList(Node *head) {
//         //step1: Copy the main list
//         Node * cloneHead=NULL;
//         Node * cloneTail=NULL;
        
//         Node * temp=head;
//         while(temp!=NULL){
//             insertAtLL(cloneHead,cloneTail,temp->data);
//             temp=temp->next;
//         }
        
//         //step-2: Insert the clone in between the original
//         Node * originalNode=head;
//         Node * cloneNode=cloneHead;
//         while(originalNode!=NULL && cloneNode!=NULL){
//             Node * next=originalNode->next;
//             originalNode->next=cloneNode;
//             originalNode = next;
            
//             next=cloneNode->next;
//             cloneNode->next=originalNode;
//             cloneNode=next;
//         }
        
//         //step-3: set the random pointers
//         temp=head;
//         while(temp!=NULL){
//             if(temp->next!=NULL){
//                 temp->next->random = temp->random? temp->random->next:temp->random;
//             }
//             temp=temp->next->next;
//         }
        
//         //step-4: revert the changes in the step-2
//         originalNode=head;
//         cloneNode=cloneHead;
//         while(originalNode!=NULL && cloneNode!=NULL){
//             originalNode->next=cloneNode->next;
//             originalNode=originalNode->next;
            
//             if(originalNode!=NULL)
//                 cloneNode->next=originalNode->next;
//             cloneNode=cloneNode->next;
//         }
//         return cloneHead;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int T;
//     cin >> T;
//     cin.ignore(); // Ignore the newline after T
//     while (T--) {
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         vector<int> arr;
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }

//         Node *head = NULL, *tail = NULL;
//         for (int i = 0; i < arr.size(); ++i) {
//             append(&head, &tail, arr[i]);
//         }

//         getline(cin, input);
//         stringstream ss2(input);
//         vector<int> arr2;
//         while (ss2 >> number) {
//             arr2.push_back(number);
//         }

//         Node *temp = head;
//         for (int i = 0; i < arr2.size(); i += 2) {
//             int a = arr2[i];
//             int b = arr2[i + 1];

//             Node *tempA = head;
//             Node *tempB = head;
//             for (int j = 1; j < a; ++j) {
//                 tempA = tempA->next;
//             }
//             for (int j = 1; j < b; ++j) {
//                 tempB = tempB->next;
//             }

//             tempA->random = tempB;
//         }

//         Solution ob;
//         Node *res = ob.copyList(head);

//         if (validation(head, res)) {
//             cout << "true" << endl;
//         } else {
//             cout << "false" << endl;
//         }
//     }
//     return 0;
// }

// // } Driver Code Ends