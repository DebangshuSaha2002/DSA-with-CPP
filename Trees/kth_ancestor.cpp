// // Given a binary tree of size  N, a node, and a positive integer k., Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1.
// // Note: It is guaranteed that the node exists in the tree.

// //https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1

// // Example 1:



// // Input:
// //      K = 2
// //      Node = 4
// // Output: 1
// // Explanation:
// // Since, K is 2 and node is 4, so we
// // first need to locate the node and
// // look k times its ancestors.
// // Here in this Case node 4 has 1 as his
// // 2nd Ancestor aka the Root of the tree.

// struct Node
// {
// 	int data;
// 	struct Node *left, *right;
// };
// */
// // your task is to complete this function
// Node * solve(Node * root,int &k,int node){
//     if(root==NULL){
//         return NULL;
//     }
    
//     if(root->data==node){
//         return root;        
//     }
    
//     Node * leftside=solve(root->left,k,node);
//     Node * rightside=solve(root->right,k,node);
    
//     if(leftside!=NULL && rightside==NULL){
//         k--;
//         if(k<=0){
//             k=INT_MAX;
//             return root;
//         }
//         return leftside;
//     }
    
//     if(leftside==NULL && rightside!=NULL){
//         k--;
//         if(k<=0){
//             k=INT_MAX;
//             return root;
//         }
//         return rightside;
//     }
//     return NULL;
// }
// int kthAncestor(Node *root, int k, int node)
// {
//     Node * ans=solve(root,k,node);
//     if(ans==NULL || ans->data==node){
//         return -1;
//     }
//     else
//         return ans->data;
// }