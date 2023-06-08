// // Pre ordder traversal is given and we need to convert it to a BST
// // Approach one is to find the inorder traversal by just sorting
// // the preorder traversal given

// // Then do the inorderToBST conversion 
// // But this takes O(nxn) time.

// // So a better approach will be-
// // Approach #2
// // We can convert directly from Pre order to BST 
// // Using the property of range. INT_MAX and INT_MIN use

// #include <bits/stdc++.h> 
// /*
//     Following is the class structure of BinaryTreeNode class for referance:

//     class BinaryTreeNode {
//        public : 
//         T data;
//         BinaryTreeNode<T> *left;
//         BinaryTreeNode<T> *right;

//         BinaryTreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~BinaryTreeNode() {
//             if (left){
//                 delete left;
//             }
//             if (right){
//                 delete right;
//             }
//         }
//     };
// */
// BinaryTreeNode<int>* solve(vector<int> &preorder,int mini,int maxi,int &i){
//     if(i>=preorder.size()){
//         return NULL;
//     }
//     if(preorder[i]<mini || preorder[i]>maxi){
//         return NULL;
//     }
//     BinaryTreeNode<int>* root=new BinaryTreeNode<int> (preorder[i++]);
//     root->left=solve(preorder,mini,root->data,i);
//     root->right=solve(preorder,root->data,maxi,i);
//     return root;
// }
// BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
//     int mini=INT_MIN;
//     int maxi=INT_MAX;
//     int i=0;
//     BinaryTreeNode<int>* root= solve(preorder,mini,maxi,i);
//     return root;
// }