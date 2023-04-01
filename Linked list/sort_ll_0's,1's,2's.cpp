//Sort a linked list of 0's 1's and 2's
// where the interchange of data is not allowed

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

void insertintoll(node * &tail,int data)
{
    node * n=new node(data);
    tail->next=n;
    tail=n;
    // n->next=NULL;
}

void insert(node * &tail,node * curr)
{
    tail->next=curr;
    tail=curr;
}

node * sortlist(node * & head){
    node * zerohead=new node(-1);
    node * zerotail=zerohead;
    node * onehead=new node(-1);
    node * onetail=onehead;
    node * twohead=new node(-1);
    node * twotail=twohead;

    node * curr=head;
    while(curr!=NULL){
        if(curr->data==0)
        {
            insert(zerotail,curr);
        }
        else if(curr->data==1)
        {
            insert(onetail,curr);
        }
        else if(curr->data==2)
        {
            insert(twotail,curr);
        }
        curr=curr->next;
    }

    //merge 3 sublists
    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
        onetail->next=twohead->next;
    }
    else{
        zerotail->next=twohead->next;
    }
    twotail->next=NULL;

    head=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
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
    node * node1=new node(1);
    node * head=node1;
    node * tail=node1;
    insertintoll(tail,0);
    insertintoll(tail,1);
    insertintoll(tail,0);
    insertintoll(tail,2);
    insertintoll(tail,1);
    insertintoll(tail,2);
    insertintoll(tail,0);
    print(head);
    cout<<endl;

    node * mainhead=sortlist(head);
    print(mainhead);

    return 0;
}