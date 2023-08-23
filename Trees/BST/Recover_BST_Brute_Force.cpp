//Recover a BST 
//Used brute force .. TC - O(nlogn)
//SC - O(n) ->as am storing the inorder 
//Leetcode-https://leetcode.com/problems/recover-binary-search-tree/description/


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
//     int i=0;
//     void inorder(TreeNode* root,vector<int> &ans){
//         if(root==NULL){
//             return;
//         }

//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//     }

//     void check(TreeNode* root,vector<int> &ans){
//         if(root==NULL){
//             return;
//         }
//         check(root->left,ans);
//         //Do the comparison of root->val with the ans vector 
//         if(root->val != ans[i]){
//             swap(root->val,ans[i]);
//         }
//         i++;
//         check(root->right,ans);
//     }
//     void recoverTree(TreeNode* root) {
//         //solving using the brute force
//         vector<int> ans;
//         inorder(root,ans);
//         sort(ans.begin(),ans.end());
//         check(root,ans);

//     }
// };