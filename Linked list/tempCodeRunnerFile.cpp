#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


void insertAtTheEnd(vector<int> &arr,Node * &tail){
    for(int i=1;i<arr.size();i++){
        Node * val=new Node(arr[i]);
        tail->next=val;
        tail=tail->next;
        // tail->next=NULL;
    }
    tail->next=NULL;
}

void printLinkedList(Node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void constructLL(vector<int>& arr) {

    Node * val=new Node (arr[0]);

    Node * head=val;
    Node * tail=head;

    insertAtTheEnd(arr,tail);

    printLinkedList(head);
    // return head;
}

int main(){
    vector<int>arr;
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    constructLL(arr);

    return 0;
}