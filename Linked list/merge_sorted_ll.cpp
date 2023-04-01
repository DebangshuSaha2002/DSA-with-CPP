//Merge 2 sorted LInked list

// Node<int>* solve(Node<int>* first, Node<int>* second){
//     if(first->next==NULL){
//         first->next=second;
//         return first;
//     }
//     Node<int> * curr1=first;
//     Node<int> * next1=curr1->next;
//     Node<int> * curr2=second;
//     Node<int> * next2=curr2->next;
//     while(next1!=NULL && curr2!=NULL)
//     {
//         if(curr2->data>=curr1->data && 
//         curr2->data<=next1->data)
//         {
//             curr1->next=curr2;
//             next2=curr2->next;
//             curr2->next=next1;

//             curr1=curr2;
//             curr2=next2;
//         }
//         else{
//             curr1=next1;
//             next1=next1->next;
//             if (next1 == NULL) {
//               curr1->next = curr2;
//               return first;
//             }
//         }
//     }
//     return first;
// }
// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     // Write your code here.
//     if(first==NULL){
//         return second;
//     }

//     if(second==NULL){
//         return first;
//     }

//     if(first->data<=second->data)
//     {
//         return solve(first,second);
//     }
//     else{
//         return solve(second,first);

//     }
// }

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



void print(node * &head){
    node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node * solve(node * &first,node * &second){
    node * curr1=first;
    node * next1=curr1->next;
    node * curr2=second;
    node * next2=curr2->next;

    while(curr2!=NULL && next1!=NULL){
        if(curr2->data>=curr1->data && curr2->data <= next1->data){
            curr1->next=curr2;
            next2=curr2->next;
            curr2->next=next1;

            curr1=curr2;
            curr2=next2;
        }
        else{
            curr1=next1;
            next1=next1->next;
            if(next1==NULL){
                return first;
            }
        }
    }
    return first;
}

node * merge_two_sorted(node * &first,node * &second)
{
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }

    if(first->data<=second->data){
        return solve(first,second);
    }
    else{
        return solve(second,first);
    }
}

int main()
{
    node * node1=new node(1);
    node * first=node1;
    node * firsttail=node1;
    insertintoll(firsttail,2);
    insertintoll(firsttail,4);
    insertintoll(firsttail,8);

    node * node2=new node(3);
    node * second=node2;
    node * secondtail=node2;
    insertintoll(secondtail,6);
    insertintoll(secondtail,7);
    insertintoll(secondtail,9);
    
    print(first);
    print(second);

    node * merge=merge_two_sorted(first,second);
    print(merge);
    return 0;
}