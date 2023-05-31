//validate a BST using the 2nd approach (Faster approach)
//check whether the data to the left of each node is smaller then the root node
//basically use BSt properties and check

// #include <bits/stdc++.h> 
// /*************************************************************
 
//     Following is the Binary Tree node structure

//     class BinaryTreeNode 
//     {
//     public : 
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }
//     };

// *************************************************************/

// bool isBST(BinaryTreeNode<int> *root,int min,int max)
// {
//     //Base Case
//     if(root==NULL){
//         return true;
//     }
//     if(root->data>=min && root->data<=max){
//         bool left=isBST(root->left,min,root->data);
//         bool right=isBST(root->right,root->data,max);
//         return left&&right;
//     }
//     return false;
// }

// bool validateBST(BinaryTreeNode<int> *root) {
//     return isBST(root,INT_MIN,INT_MAX);
// }