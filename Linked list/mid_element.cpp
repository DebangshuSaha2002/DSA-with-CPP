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

int lengthofLinkedList(node * & head)
{
    int count=0;
    node * temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

node * middleofLinkedList(node * &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    int len=lengthofLinkedList(head);
    int mid=len/2;
    int counter=0;
    node * temp1=head;
    while(counter<mid){
        counter++;
        temp1=temp1->next;
    }
    // temp1=temp1->next;
    return temp1;
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