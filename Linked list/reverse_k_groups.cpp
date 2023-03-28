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

node * reverse_k(node * &head,int k)
{
    node * curr=head;
    node * prev=NULL;
    node * forward=NULL;
    int count=0;

    //base case
    if(head==NULL){
        return head;
    }

    //reverse first k nodes
    while(curr!=NULL && count<k)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    //rest of the nodes are reversed by recursion
    if(forward!=NULL){
        head->next=reverse_k(forward,k);
    }

    return prev;
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
    node * prev=reverse_k(head,2);
    print(prev);
    return 0;
}