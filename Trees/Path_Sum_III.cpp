//Path Sum III
//https://leetcode.com/problems/path-sum-iii/description/

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
//     void solve(TreeNode * root,int targetSum,int &count,vector<long int> path){
//         if(root==NULL){
//             return;
//         }

//         path.push_back(root->val);
//         //left call
//         solve(root->left,targetSum,count,path);
//         //right call
//         solve(root->right,targetSum,count,path);

//         long int sum=0;
//         int size=path.size();
//         for(int i=size-1;i>=0;i--){
//             sum+=path[i];
//             if(sum==targetSum){
//                 count++;
//             }
//         }

//         path.pop_back();
//     }
//     int pathSum(TreeNode* root, int targetSum) {
//         int count=0;
//         vector<long int> path;
//         solve(root,targetSum,count,path);
//         return count;
//     }
// };