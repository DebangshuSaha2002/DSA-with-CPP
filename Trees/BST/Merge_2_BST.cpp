//Approach #1
// #include <bits/stdc++.h> 
// /*************************************************************
    
//     Following is the Binary Tree node structure:

//     class TreeNode{

//         public :
//             int data;
//             TreeNode *left;
//             TreeNode *right;

//             TreeNode(int data) {
//                 this -> data = data;
//                 left = NULL;
//                 right = NULL;
//             }

//             ~TreeNode() {
//             if (left){
//             delete left;
//             }

//             if (right){
//             delete right;
//             }
//         }   
//     };

// *************************************************************/
// void inorder(TreeNode<int> *root,vector<int> & tree){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left, tree);
//     tree.push_back(root->data);
//     inorder(root->right, tree);
// }

// vector<int> mergeSorted(vector<int> a,vector<int> b){
//     vector<int> ans(a.size()+b.size());
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]<b[j]){
//             ans[k++]=a[i];
//             i++;
//         }
//         else{
//             ans[k++]=b[j];
//             j++;
//         }
//     }
//     while(i<a.size()){
//         ans[k++]=a[i];
//         i++;
//     }
//     while(j<b.size()){
//         ans[k++]=b[j];
//         j++;
//     }
//     return ans;
// }

// TreeNode<int> * inorderToBST(vector<int>& ans,int start,int end){
//     if(start>end){
//         return NULL;
//     }
//     int mid=(start+end)/2;
//     TreeNode<int> * root=new TreeNode<int> (ans[mid]);
//     root->left=inorderToBST(ans,start,mid-1);
//     root->right=inorderToBST(ans,mid+1,end);
//     return root;
// }

// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
//     vector<int> tree1,tree2;
//     inorder(root1,tree1);
//     inorder(root2,tree2);
//     vector<int> merged=mergeSorted(tree1,tree2);
//     int start=0;
//     int end=merged.size()-1;
//     TreeNode<int> * root= inorderToBST(merged,start,end);
//     return root;

// }