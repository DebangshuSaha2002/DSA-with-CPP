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

node * create_tree(node * root){
    // cout<<"Enter the data:";
    int val;
    cin>>val;
    root=new node(val);
    if(val==-1){
        return NULL;
    }
    cout<<"\nEnter the left child of "<<val<<" : ";
    root->left=create_tree(root->left);
    cout<<"\nEnter the right child of "<<val<<" : ";
    root->right=create_tree(root->right);
    return root;
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
    root=create_tree(root);
    level_order_traversal(root);
    return 0;
}