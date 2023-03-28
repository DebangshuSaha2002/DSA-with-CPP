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

void insertatend(node * &head)
{
    int n;
    cout<<"Enter 1 to continue and 0 to end:";
    cin>>n;
    int data=0;
    while(n==1)
    {
        cout<<"Enter the data:";
        cin>>data;
        node * node1=new node(data);
        if(head==NULL){
            head=node1;
        }
        node * temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=node1;
        node1->next=NULL;
        cout<<"Enter 1 to continue and 0 to end:";
        cin>>n;
    }
}

node * middleofLinkedList(node * &head)
{
    node * slow=head;
    node * fast=head->next;
    while(fast!=NULL)
    {
        slow=slow->next;
        if(fast->next!=NULL){
            fast=fast->next->next;
        }else{
            fast=fast->next;
        }
    }
    return slow;
}

void print(node * &head){
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
    node * head=NULL;
    insertatend(head);
    print(head);
    node * pointer=middleofLinkedList(head);
    cout<<pointer->data<<endl;
    return 0;
}