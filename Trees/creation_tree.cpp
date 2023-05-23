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
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"\nEnter the left child of "<<data<<": ";
    root->left=create_tree(root->left);
    cout<<"\nEnter the right child of "<<data<<": ";
    root->right=create_tree(root->right);
    return root;
}

void level_order_traversal(node * root){
    queue <node *> q;
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

node * build_from_level_order(node * root){
    queue <node *>q;
    cout<<"Enter the data for root:";
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node * temp=q.front();
        q.pop();

        cout<<"Enter the left node for : "<<temp->data;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right node for : "<<temp->data;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
}

void inorder_traversal(node * root){
    if(root==NULL){
        return ;
    }
    inorder_traversal(root->left);
    cout<<root->data<< " ";
    inorder_traversal(root->right);
}

void preorder_traversal(node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<< " ";
    preorder_traversal(root->left);
    inorder_traversal(root->right);
}

void postorder_traversal(node * root){
    if(root==NULL){
        return;
    }
    preorder_traversal(root->left);
    inorder_traversal(root->right);
    cout<<root->data<< " ";
}
int main(){
    node * root=NULL;
    root=create_tree(root);
    cout<<"\nInorder traversal:"<<endl;
    inorder_traversal(root);
    cout<<"\nLevelorder traversal:"<<endl;
    level_order_traversal(root);
    cout<<"\nPreorder traversal:"<<endl;
    preorder_traversal(root);
    cout<<"\nPostorder traversal:"<<endl;
    postorder_traversal(root);
    return 0;
}