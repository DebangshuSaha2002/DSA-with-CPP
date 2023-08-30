//Longest Univalue Path
//https://leetcode.com/problems/longest-univalue-path/description/

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
//     int height(TreeNode * root,int &dis){
//         if(root==NULL){
//             return 0;
//         }

//         int left=height(root->left,dis);
//         int right=height(root->right,dis);
//         int dl=(root->left && root->val == root->left->val)?left+1:0;
//         int dr=(root->right && root->val == root->right->val)?right+1:0;

//         dis=max(dis,dl+dr);
//         return max(dl,dr);
//     }

//     int longestUnivaluePath(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }

//         int dis=0;
//         height(root,dis);
//         return dis;
//     }
// };