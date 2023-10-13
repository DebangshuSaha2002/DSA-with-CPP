#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        Node * next=NULL;
    }
};

Node * findnfromEnd(Node *&head, int n){
    // if(head==NULL){
    //     return NULL;
    // }
    Node * slow=head;
    Node * fast=head;
    int count=0;
    while(fast!=NULL && count<n){
        fast=fast->next;
        count++;
    }

    if(count==n){
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }else{
        return NULL;
    }

    return slow;
}

int main(){
    int n=4;
    Node * head=NULL;
    Node * ptr=findnfromEnd(head,n);
    cout<<"Value is:"<<ptr->data;
    return 0;
}