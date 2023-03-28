#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertintoll(node * &head)
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    node* temp=head;
    node * node1=new node(n);
    if(head==NULL)
    {
        head=node1;
    }
    else{
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=node1;
        node1->next=NULL;
    }
}

node * reverse(node * &head){
    node * prev=NULL;
    node * curr=head;
    node * forward=NULL;
    while(curr!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

void print(node * &head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
}

int main(){
    //single linked list
    node * head=NULL;
    insertintoll(head);
    insertintoll(head);
    insertintoll(head);
    insertintoll(head);
    // print(head);

    node * curr=reverse(head);
    cout<<endl;
    print(curr);
    cout<<"hello"<<endl;
    return 0;
}