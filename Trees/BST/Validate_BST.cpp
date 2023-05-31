// by finding inordered and checking  whether its sorted or not

// // #include <bits/stdc++.h> 
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
// void inorder(BinaryTreeNode<int> *root,vector<int> &inordered){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left,inordered);
//     inordered.push_back(root->data);
//     inorder(root->right,inordered);
// }

// bool isBST(BinaryTreeNode<int> *root,vector<int> &inordered)
// {
//     bool flag=true;
//     int len=inordered.size();
//     for(int i=0;i<len-1;i++){
//         if(inordered[i]>inordered[i+1]){
//             flag = false;
//             break;
//         }
//     }
//     return flag;
// }

// bool validateBST(BinaryTreeNode<int> *root) {
//     if(root==NULL){
//         return true;
//     }
//     vector<int> inordered;
//     inorder(root,inordered);
//     return isBST(root,inordered);
// }