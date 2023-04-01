//WAP to check whether is palindrome or not

#include<iostream>
#include<vector>
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

void insertnodes(node * &head)
{
    int n;
    cout<<"Do you want to continue:";
    cin>>n;
    while(n==1)
    {
        int data;
        cout<<"\nEnter the data:";
        cin>>data;
        node * node1=new node(data);
        if(head==NULL){
            head=node1;
        }
        else{
            node * temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=node1;
        }
        cout<<"Do you want to continue:";
        cin>>n;
    }
}

//Better approach- This aproach will take O(n) TC and O(1) SC
node * getmiddle(node * &head)
{
    node * slow=head;
    node * fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

node * reverse(node * &head)
{
    node * curr=head;
    node * prev=NULL;
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

bool palindrome(node * & head)
{
    node * mid=getmiddle(head);
    node * rev=reverse(mid->next);
    mid->next=rev;
    while(rev!=NULL)
    {
        if(head->data!=rev->data)
        {
            return false;
        }
        head=head->next;
        rev=rev->next;
    }
    return true;
}

void print(node * head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node * head=NULL;
    insertnodes(head);
    print(head);
    if(head==NULL || head->next==NULL)
    {
        return 1;
    }
    bool storeans=palindrome(head);
    cout<<"\nThe linked list is palindrome or not : "<<storeans<<endl;
}