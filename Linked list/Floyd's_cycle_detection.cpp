//Using Floyd's cycle detection algorithm 

#include<iostream>
#include<map>
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
    n->next=NULL;
}
//just check the logic

node * floyd_detect_cycle(node * head)
{
    if(head==NULL)
    {
        return NULL;
    }

    node * slow=head;
    node * fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            // cout<<"slow=fast at:"<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

node * startingofloop(node * head)
{
    node * intersection=floyd_detect_cycle(head);
    node * slow=head;
    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    cout<<"Starting point of loop is : "<<intersection->data<<endl;
    return slow;
}

node * remove_loop(node * &head)
{
    cout<<"value of my head"<<head->data<<endl;
    node * loop_starts_at=startingofloop(head);
    node * temp=loop_starts_at->next;;
    while(temp->next!=loop_starts_at)
    {
        temp=temp->next;
    }
    temp->next=NULL;
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
    node * node1=new node(10);
    node * head=node1;
    node * tail=node1;
    insertintoll(tail,20);
    insertintoll(tail,30);
    insertintoll(tail,40);
    insertintoll(tail,50);
    insertintoll(tail,80);
    insertintoll(tail,90);
    insertintoll(tail,100);
    tail->next=head->next;
    // print(head);
    cout<<endl;
    bool ans=floyd_detect_cycle(head);
    cout<<"The linked list is circular?"<<ans<<endl;

    //Find the starting point of the loop
    startingofloop(head);

    remove_loop(head);
    print(head);
    return 0;
}