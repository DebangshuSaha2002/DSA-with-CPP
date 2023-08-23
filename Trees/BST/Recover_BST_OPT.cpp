//Recover BST using optimised approach
//T.C is O(n) 
//SC is O(1) - not considering recursive stack space


// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// private:
//     TreeNode* prev;
//     TreeNode* first;
//     TreeNode* mid;
//     TreeNode* last;
// private:
//     void inorder(TreeNode* root){
//         if(root==NULL){
//             return;
//         }

//         inorder(root->left);

//         if(prev!=NULL && (prev->val > root->val) )
//         {
//             if(first==NULL){
//                 first=prev;
//                 mid=root;
//             }
//             //If this is the secod violation
//             else{
//                 last=root;
//             }
//         }
//         //updating prev;
//         prev=root;

//         inorder(root->right);
//     }
// public:
//     void recoverTree(TreeNode* root) {
//         first=mid=last=NULL;
//         prev=new TreeNode(INT_MIN);
//         inorder(root);
//         if(first && last){
//             swap(first->val,last->val);
//         }

//         else if(first && mid){
//             swap(first->val,mid->val);
//         }
//     }
// };

