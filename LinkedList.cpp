#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void addtoLinkedList(Node * &tail,int val){
    Node * newNode=new Node(val);
    tail->next=newNode;
    tail=newNode;
    newNode->next=NULL;
}

Node * reverse(Node * head){
    Node * curr=head;
    Node * prev=NULL;
    Node * forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }

    return prev;
}

void printLinkedList(Node * head){
    if(head==NULL){
        return;
    }

    Node * temp=head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// Node * reverseInGroups(Node * &head,int k){
//     Node * curr=head;
//     Node * prev=NULL;
//     Node * forward=NULL;
//     int count=0;

//     if(head==NULL){
//         return head;
//     }
//     while(curr!=NULL && count<k){
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//         count++;
//     }

//     if(curr!=NULL){
//         head->next=reverseInGroups(curr,k);
//     }
//     return prev;
// }


Node * reverse_k(Node * &head,int k)
{
    Node * curr=head;
    Node * prev=NULL;
    Node * forward=NULL;
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
    if(curr!=NULL){
        head->next=reverse_k(curr,k);
    }

    return prev;
}

Node * MiddleElement(Node * head){
    Node * slow=head;
    Node * fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node * FloydCycleDetection(Node * head){
    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        return head;
    }

    Node * slow=head;
    Node * fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node * FindStartingNode(Node * head){
    Node * intersection=FloydCycleDetection(head);
    Node * slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
        if(slow==intersection){
            return slow;
        }
    }

    return NULL;
}

void removeCycle(Node * &head){
    if(head==NULL){
        return;
    }
    Node * start=FindStartingNode(head);
    Node * temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    temp->next=NULL;
}

Node * sortit(Node * & head){
    // if(head==NULL){
    //     return NULL;
    // }

    Node * zerohead=new Node(-1);
    Node * zerotail=zerohead;
    Node * onehead=new Node(-1);
    Node * onetail=onehead;
    Node * twohead=new Node(-1);
    Node * twotail=twohead;

    Node * temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            addtoLinkedList(zerotail,0);
        }else if(temp->data==1){
            addtoLinkedList(onetail,1);
        }else if(temp->data==2){
            addtoLinkedList(twotail,2);
        }
        temp=temp->next;
    }

    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
        onetail->next=twohead->next;
    }else{
        zerotail->next=twohead->next;
    }
    twotail->next=NULL;
    head=zerohead->next;
    delete onehead;
    delete twohead;
    delete zerohead;
    return head;
}

int main(){
    Node * newNode=new Node(2);
    Node * head=newNode;
    Node * tail=newNode;
    addtoLinkedList(tail,1);
    addtoLinkedList(tail,2);
    addtoLinkedList(tail,0);
    addtoLinkedList(tail,0);
    addtoLinkedList(tail,1);
    addtoLinkedList(tail,2);
    addtoLinkedList(tail,0);
    addtoLinkedList(tail,1);
    // tail->next=head->next;

    // Node * deteckCycle=FloydCycleDetection(head);
    // cout<<"Cycle Detected:"<<deteckCycle<<endl;

    // Node * startingNode=FindStartingNode(head);
    // cout<<"Intersection is starting at : "<<startingNode->data<<endl;

    // removeCycle(head);
    printLinkedList(head);
    // printLinkedList(head);
    // Node * rev=reverse(head);
    // printLinkedList(rev);

    // Node * revGroups=reverse_k(head,2);
    // printLinkedList(revGroups);

    // Node * middleELement=MiddleElement(head);
    // cout<<"\nMiddle Element is:"<<middleELement->data;
    

    //sorting 0 1 and 2

    Node * ans=sortit(head);
    printLinkedList(ans);
    return 0;
}