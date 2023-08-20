// //Leetcode-https://leetcode.com/problems/path-sum/description/

// //Path SUM

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
//     bool solve(TreeNode* root,int sum,int targetSum){
//         if(root==NULL){
//             return false;
//         }

//         if(root->left==NULL && root->right==NULL){
//             sum+=root->val;
//             if(sum==targetSum){
//                 return true;
//             }
//         }

//         return solve(root->left,sum+root->val,targetSum) || solve(root->right,sum+root->val,targetSum);
//     }
//     bool hasPathSum(TreeNode* root, int targetSum) {
//         int sum=0;
//         return solve(root,sum,targetSum);
//     }
// };