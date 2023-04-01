//Solution to remove duplicates from sorted linked list in cpp
//without using maps

#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertatend(node * & head){
    int n;
    cout<<"Do you want to continue?";
    cin>>n;
    int data;
    while(n==1){
        cout<<"Enter the data:";
        cin>>data;
        node * node1=new node(data);
        if(head==NULL){
            head=node1;
        }
        else{
            node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=node1;
        }
        cout<<"Do you want to continue?";
        cin>>n;
    }
}

node * rem_dup(node * &head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
    node * curr=head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data)
        {
            node * del=curr->next;
            curr->next=curr->next->next;
            delete del;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

void print(node * &head){
    node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node * head=NULL;
    insertatend(head);
    print(head);
    head=rem_dup(head);
    cout<<"\nAfter removing duplicates:"<<endl;
    print(head);
}