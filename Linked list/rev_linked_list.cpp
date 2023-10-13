#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertintoLL(Node * &head){
    int n;
    cout<<"\nEnter the data:";
    cin>>n;
    Node * node1=new Node(n);
    Node * temp=head;
    if(head==NULL){
        head=node1;
        node1->next=NULL;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node1;
        node1->next=NULL;
    }
}

void printList(Node * head){
    Node * ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

Node * reverse(Node * head){
    Node * curr=head;
    Node * prev=NULL;
    Node * temp=NULL;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

int main(){
    Node * head=NULL;
    insertintoLL(head);
    insertintoLL(head);
    insertintoLL(head);
    insertintoLL(head);
    insertintoLL(head);
    insertintoLL(head);

    printList(head);

    head=reverse(head);
    printList(head);
    return 0;
}