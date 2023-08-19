//Leetcode Validate BST
//https://leetcode.com/problems/validate-binary-search-tree/description/

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
// public:
//     bool isBST(TreeNode * root,long long min,long long max){
//         if(root==NULL){
//             return true;
//         }

//         if(root->val<min || root->val>max){
//             return false;
//         }

//         return isBST(root->left,min,static_cast<long long> (root->val)-1) && isBST(root->right,static_cast<long long> (root->val)+1,max);
//     }
//     void inorder_traversal(TreeNode * root,vector<int> &ans){
//         if(root==NULL){
//             return;
//         }

//         inorder_traversal(root->left,ans);
//         ans.push_back(root->val);
//         inorder_traversal(root->right,ans);
//     }

//     bool issorted(vector<int> &ans){
//         if(ans.size()<=1){
//             return true;
//         }
//         bool val=false;
//         for(int i=0;i<ans.size()-1;i++){
//             if(ans[i]<ans[i+1]){
//                 val=true;
//             }
//             else{
//                 return false;
//             }
//         }
//         return val;
//     }
//     bool isValidBST(TreeNode* root) {
//         // return isBST(root,LLONG_MIN,LLONG_MAX);

//         //can also be done by finding the inorder traversal
//         vector<int> ans;
//         inorder_traversal(root,ans); 

//         return issorted(ans);
//     }
// };