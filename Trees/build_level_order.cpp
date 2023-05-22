//Building a binary tree from level order traversal method

#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node * left;
    node * right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

void build_from_level_order(node * &root){
    queue<node *>q;
    cout<<"Enter the root data";
    int data;
    cin>>data;
    root= new node (data);
    q.push(root);

    while(!q.empty()){
        node * temp=q.front();
        q.pop();

        cout<<"\nEnter the left child of "<<temp->data<<" : ";
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }

        cout<<"\nEnter the right child of "<<temp->data<<" : ";
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}

void level_order_traversal(node * root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    node * root=NULL;;
    build_from_level_order(root);
    level_order_traversal(root);
    return 0;
}