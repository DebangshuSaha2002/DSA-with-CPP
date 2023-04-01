//Remove duplicates from a sorted linked list

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

void rem_dup(node * &head){
    map<int,bool> visited;
    node * curr=head;
    node * prev=NULL;
    while(curr!=NULL){
        if(visited[curr->data]==true)
        {
            node * del=curr;
            prev->next=curr->next;
            curr=prev->next;
            delete del;
        }
        else{
            visited[curr->data]=true;
            prev=curr;
            curr=curr->next;
        }
    }
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
    rem_dup(head);
    cout<<"\nAfter removing duplicates:"<<endl;
    print(head);
}