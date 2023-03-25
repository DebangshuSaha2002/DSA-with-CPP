//Single linked list in cpp

#include<iostream>
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

void insertathead(node* &head,int data)
{
    node * temp=new node(data);
    temp->next=head;
    head=temp;
}

void insertattail(node* &tail,int data)
{
    node* temp=new node(data);
    tail->next=temp;
    tail=tail->next;
}

void insertatpos(node* &head,int data,int pos,node* &tail)
{
    if(pos==1)
    {
        insertathead(head,data);
        return;
    }
    node * tt=head;
    int count=1;
    while(count!=pos-1)
    {
        tt=tt->next;
        count++;
    }
    if(tt->next==NULL)
    {
        insertattail(tail,data); 
        return;
    }
    node * temp=new node(data);
    temp->next=tt->next;
    tt->next=temp;
}

void deletefromhead(node* &head)
{
    node * temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void deletefromend(node * &head)
{
    node * temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    node * del=temp->next;
    temp->next=NULL;
    del->next=NULL;
    delete del;
}

void deleteatpos(node * &head,int pos)
{
    int count=1;
    node * temp=head;
    if(pos==1)
    {
        deletefromhead(head);
        return;
    }
    
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node * del=temp->next;
    temp->next=del->next;
    del->next=NULL;
    delete del;
}

void deletebyval (node * &head,int val)
{
    node * temp=head;
    node * prev=NULL;
    while(temp->data!=val)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
}
void print(node* &head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node * node1=new node(10);

    node * head=node1;
    node * tail=node1;
    insertattail(tail,20);
    insertattail(tail,30);
    insertattail(tail,40);
    insertattail(tail,50);
    insertatpos(head,60,6,tail);
    print(head);

    //deletion
    deletefromhead(head);
    cout<<"\n\nAfter deleting from head"<<endl;
    print(head);

    deleteatpos(head,5);
    cout<<"\n\nAfter deleting from 5 position"<<endl;
    print(head);

    // deletefromend(head);
    // cout<<"\n\nAfter deleting from end"<<endl;
    // print(head);

    deletebyval(head,30);
    cout<<"\n\nAfter deleting 30"<<endl;
    print(head);
    return 0;
}