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

// Node * Minimum(Node * root){
//     Node * temp=root;
//     while(temp->left!=NULL){
//         temp=temp->left;
//     }
//     return temp;
// }

int Maximum(Node * root){
    Node * temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}

// int successor(Node * root,int x,int &succ){
//     if(root==NULL){
//         return -1; 
//     }
//     if(root->data==x){
//         if(root->right){
//             return Minimum(root->right);
//         }
//     }
//     else if (x>root->data){
//         return successor(root->right,x,succ);
//     }
//     else if(x<root->data){
//         int succ = root->data;
//         return successor(root->left,x,succ);
//     }
//     return succ;
// }

// int predecessor(Node * root,int x,int pred){
//     if(root==NULL){
//         return -1;
//     }
//     if(root->data==x){
//         if(root->left){
//             return Maximum(root->left);
//         }
//     }
//     else if(x>root->data){
//         pred=root->data;
//         return predecessor(root->right,x,pred);
//     }
//     else{
//         return predecessor(root->left,x,pred);
//     }
//     return pred;
// }

//Deletion from BSt
//Very important for interview

Node * deleteFromBST(Node * root,int y){
    if(root==NULL){
        return root;
    }
    //0 child
    if(root->data==y){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child

        //left child
        else if(root->left!=NULL && root->right==NULL){
            Node * storeLeft=root->left;
            delete root;
            return storeLeft;
        }

        //right child
        else if(root->left==NULL && root->right!=NULL){
            Node * storeRight=root->right;
            delete root;
            return storeRight;
        }
        //2 child
        else if(root->left!=NULL && root->right!=NULL){
            int ans=Minimum(root->right);
            root->data=ans;
            root->right= deleteFromBST(root->right,ans);
            return root;
        }
    }
    else if(y>root->data){
        root->right= deleteFromBST(root->right,y);
        return root;
    }

    else if(y<root->data){
        root->left= deleteFromBST(root->left,y);
        return root;
    }
    return NULL;
}

int main(){
    Node * root=NULL;
    root=insertData(root);
    cout<<"Inorder Traversal of the BST is : ";
    inorder_traversal(root);
    cout<<endl;

    // cout<<"Preorder Traversal of the BST is : ";
    // preorder_traversal(root);
    // cout<<endl;

    // cout<<"Postorder Traversal of the BST is : ";
    // postorder_traversal(root);
    // cout<<endl;

    // cout<<"Level Order Traversal of the BST is : \n";
    // levelorder_traversal(root);
    // cout<<endl;

    // int min_val=Minimum(root);
    // cout<<"\nThe minimum value in the BST is : "<<min_val;

    // int max_val=Maximum(root);
    // cout<<"\nThe maximum value in the BST is : "<<max_val;

    // cout<<"\n\nWhose succesor & predecessor you want to find:";
    // int x;
    // cin>>x;
    // int succc=0;
    // int succAns=successor(root,x,succc);
    // int predAns=predecessor(root,x,0);

    // cout<<"Successor of "<<x<<" is : "<<succAns;
    // cout<<"\n\nPredecessor of "<<x<<" is : "<<predAns;

    cout<<"Enter the node data that u want to delete: ";
    int y;
    cin>>y;
    root=deleteFromBST(root,y);
    inorder_traversal(root);
    return 0;
}