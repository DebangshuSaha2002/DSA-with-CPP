// //Largest BST in a binary tree
// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the Binary Tree node structure
    
//     template <typename T>
//     class TreeNode {
//         public :
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~TreeNode() {
//             if(left)
//                 delete left;
//             if(right)
//                 delete right;
//         }
//     };

// ************************************************************/
// class info{
//     public:
//     int maxi;
//     int mini;
//     bool isBST;
//     int size;
// };

// info solve(TreeNode<int>* root,int &ans){
//     if(root==NULL){
//         return {INT_MIN,INT_MAX,true,0};
//     }

//     info left=solve(root->left,ans);
//     info right=solve(root->right,ans);

//     info currNode;

//     currNode.size=left.size+right.size+1;
//     currNode.maxi=max(root->data,right.maxi);
//     currNode.mini=min(root->data,left.mini);

//     if(right.isBST && left.isBST && (root->data<right.mini && root->data>left.maxi)){
//         currNode.isBST=true;
//     }
//     else{
//         currNode.isBST=false;
//     }
//     if(currNode.isBST){
//         ans=max(ans,currNode.size);
//     }
//     return currNode;
// }

// int largestBST(TreeNode<int>* root) 
// {
//     int maxSize=0;
//     info temp=solve(root,maxSize);
//     return maxSize;
// }
