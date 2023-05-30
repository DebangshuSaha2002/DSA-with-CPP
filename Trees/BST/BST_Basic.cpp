//Binary search Tree implementation
//Left side of the root condition : data<root->data
//Right side of the root condition : data>root->data
//Worst case Time complexity is : O(log N)

#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node * createBinaryTree(Node * root,int data){
    if(root==NULL){
        root=new Node(data);
    }
    if(data<root->data){
        root->left=createBinaryTree(root->left,data);
    }
    else if(data>root->data){
        root->right=createBinaryTree(root->right,data);
    }
    return root;
}

Node * insertData(Node * root){
    int data;
    cin>>data;
    while(data!=-1){
        root=createBinaryTree(root,data);
        cin>>data;
    }
    return root;
}

void inorder_traversal(Node * root){
    if(root==NULL){
        return;
    }
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}

void preorder_traversal(Node * root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void postorder_traversal(Node * root){
    if(root==NULL){
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
    
}

void levelorder_traversal(Node * root){
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * front=q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else if(front!=NULL){
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
    }
}

int Minimum(Node * root){
    Node * temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int Maximum(Node * root){
    Node * temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}

int main(){
    Node * root=NULL;
    root=insertData(root);
    cout<<"Inorder Traversal of the BST is : ";
    inorder_traversal(root);
    cout<<endl;

    cout<<"Preorder Traversal of the BST is : ";
    preorder_traversal(root);
    cout<<endl;

    cout<<"Postorder Traversal of the BST is : ";
    postorder_traversal(root);
    cout<<endl;

    cout<<"Level Order Traversal of the BST is : \n";
    levelorder_traversal(root);
    cout<<endl;

    int min_val=Minimum(root);
    cout<<"\nThe minimum value in the BST is : "<<min_val;

    int max_val=Maximum(root);
    cout<<"\nThe maximum value in the BST is : "<<max_val;

    return 0;
}