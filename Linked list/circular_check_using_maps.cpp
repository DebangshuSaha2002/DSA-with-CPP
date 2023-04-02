//Check cycle is there in the single linked list or not using maps


//In this approach the space complexity will be O(n) as 
//all the data we are having to store into the map one by one

//So we need to optimize the solution such that it is done in O(1)
//space complexity 

//That is why we go for the Floyd's triangle algorithm

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

bool check_circular(node * &head)
{
    if(head==NULL)
    {
        return true;
    }
    if(head->next==NULL){
        return false;
    }
    map<node *,bool>visited;
    node * temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"The loop is detected at node "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
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
    tail->next=head->next;
    bool ans=check_circular(head);
    cout<<"The linked list is circular?"<<ans<<endl;
    return 0;
}