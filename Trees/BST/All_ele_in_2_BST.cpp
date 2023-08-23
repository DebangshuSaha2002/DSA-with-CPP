//All the elements in 2 BST
//Leetcode - https://leetcode.com/problems/all-elements-in-two-binary-search-trees/description/
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
//     void findinorder(TreeNode* root,vector<int> &store){
//         if(root==NULL){
//             return;
//         }

//         findinorder(root->left,store);

//         store.push_back(root->val);

//         findinorder(root->right,store);
//     }
// public:
//     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//         vector<int> tree1;
//         vector<int> tree2;

//         findinorder(root1,tree1);

//         findinorder(root2,tree2);

//         //sort both the vectors and store it in a vector and return it;
//         vector<int> ans;
        
//         int index1=0;
//         int index2=0;
//         int k=0;
//         while(index1<tree1.size() && index2<tree2.size()){
//             if(tree1[index1]<tree2[index2]){
//                 ans.push_back(tree1[index1]);
//                 index1++;
//             }

//             else{
//                 ans.push_back(tree2[index2]);
//                 index2++;
//             }
//         }

//         while(index1<tree1.size()){
//             ans.push_back(tree1[index1]);
//             index1++;
//         }

//         while(index2<tree2.size()){
//             ans.push_back(tree2[index2]);
//             index2++;
//         }

//         return ans;
//     }
// };