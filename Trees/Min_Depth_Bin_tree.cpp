//Find the minimum depth of the binary tree
//Leetcode-https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// class Solution {
// public:
//     int solve(TreeNode * root){
//         queue<TreeNode *> q;
//         q.push(root);
//         int depth=0;
//         while(!q.empty()){
//             int size=q.size();
//             for(int i=0;i<size;i++){
//                 TreeNode * frontNode=q.front();
//                 q.pop();
//                 if(frontNode->left == NULL && frontNode->right == NULL){
//                     return depth+1;
//                 }

//                 if(frontNode->left){
//                     q.push(frontNode->left);
//                 }
//                 if(frontNode->right){
//                     q.push(frontNode->right);
//                 }
//             }
//             depth++;
//         }
//         return depth;
//     }
//     int minDepth(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         //simple use BFS
//         return solve(root);
//     }
// };