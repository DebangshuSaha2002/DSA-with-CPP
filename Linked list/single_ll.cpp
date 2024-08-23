#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node * &head, int d){
    Node * newNode = new Node(d);
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node * &head, int d){
    Node * newNode= new Node (d);
    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;
}

void insertAtPos(Node * &head, int data, int pos){
    //considering the position to start from 1
    Node * temp = head;
    Node * newNode = new Node(data);
    int count=1; //index from 1
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteAtPos(Node * &head, int pos){
    Node * temp = head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    Node * delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}

void deleteVal(Node * &head){
    int val;
    cout<<"Enter the value to be deleted: ";
    cin>>val;
    Node * temp=head;
    if(temp->next!=NULL && temp->next->data!=val){
        temp=temp->next;
    }
    Node * delNode = temp->next;
    temp->next=delNode->next;
    delete delNode;
}

void printNode(Node * &head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node * node1=new Node(10);
    Node * head=node1;
    insertAtHead(head, 12);
    insertAtHead(head, 13);
    insertAtHead(head, 32);

    insertAtTail(head,100);
    insertAtTail(head,200);

    insertAtPos(head,300,3);
    printNode(head);

    deleteAtPos(head,3);
    printNode(head);

    deleteVal(head);
    printNode(head);
}