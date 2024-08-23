#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
    Node * prev;

    Node (int data){
        this->data = data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node * &head, Node * &tail){
    int data;
    cout<<"\nEnter the data to insert at Head: ";
    cin >> data;
    if(head==NULL){
        Node * temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{
        Node * newNode = new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head = newNode;
    }
}

void insertAtTail(Node * &tail){
    int data;
    cout<<"\nEnter the data to insert at Tail: ";
    cin >> data;
    Node * newNode = new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

void printLL(Node * &head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtPos(Node * &head, Node * &tail, int pos){
    int data;
    cout<<"\nEnter the data to insert at "<<pos<<": ";
    cin >> data;

    //for inserting at position 1 -> means at head
    if(pos==1){
        insertAtHead(head, tail);
        return;
    }

    //considering the position to start from 1
    Node * temp = head;
    Node * newNode = new Node(data);
    int count=1; //index from 1
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    newNode->next = temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev = temp;
    // temp->next=newNode;
    // temp->next->prev=newNode;
}

void printReverse(Node * &tail){
    Node * temp=tail;
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

int main(){
    Node * head = NULL;
    Node * tail = NULL;
    insertAtHead(head, tail);
    insertAtHead(head, tail);

    printLL(head);

    insertAtTail(tail);
    insertAtTail(tail);
    insertAtTail(tail);
    printLL(head);

    printReverse(tail);

    insertAtPos(head, tail, 3);
    printLL(head);
    printReverse(tail);
}