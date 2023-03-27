//Doubly linked list

#include<iostream>
using namespace std;

class node{
    public:
    node * prev;
    int data;
    node * next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    //dextructor
    ~node()
    {
        int val=this->data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data"<<data<<endl;
    }
};

void insertatfirst(node * &head,int data)
{
    node * n=new node(data);
    n->next=head;
    head->prev=n;
    head=n;
}

void insertatend(node * &head,int data)
{
    node * n=new node(data);
    node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    n->next=NULL;
}

void insertatpos(node * &head,int data,int pos)
{
    int count=1;
    node * n=new node(data);
    node * temp=head;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    n->next=temp->next;
    n->prev=temp;
    temp->next=n;
    temp->next->prev=n;

}

void deleteatpos(node * &head,int pos)
{
    node *temp=head;
    int count=1;
    if(pos==1)
    {
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node * del=temp->next;
    temp->next=del->next;
    del->next->prev=temp;
    del->next=NULL;
    del->prev=NULL;
    delete del;
}
void print(node * &head)
{
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node * node1=new node(10);
    node * head=node1;
    print(head);
    // cout<<head->data<<endl;

    insertatfirst(head,20);
    cout<<"After inserting at the first"<<endl;
    print(head);
    // cout<<head->data;

    insertatend(head,30);
    insertatend(head,330);
    insertatend(head,3);
    cout<<"After inserting at the end"<<endl;
    print(head);  

    //inserting at any position
    insertatpos(head,100,4);
    print(head);
    insertatpos(head,200,7);
    insertatpos(head,2000,8);
    print(head);

    //deletion
    deleteatpos(head,1);
    deleteatpos(head,1);
    print(head);
    return 0;
}