// Given a binary tree with a value associated with each node, 
// we need to choose a subset of these nodes such that sum of 
// chosen nodes is maximum under a constraint that no two chosen 
// node in subset should be directly connected that is, if we have 
// taken a node in our sum then we can’t take its any children or 
// parents in consideration and vice versa.

                                               

// Example 1:

// Input:
//      11
//     /  \
//    1    2
// Output: 11
// Explanation: The maximum sum is sum of
// node 11.
// Example 2:

// Input:
//         1
//       /   \
//      2     3
//     /     /  \
//    4     5    6
// Output: 16
// Explanation: The maximum sum is sum of
// nodes 1 4 5 6 , i.e 16. These nodes are
// non adjacent.

// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };


// class Solution{
//   public:
//     pair<int,int> solve(Node * root){
//         if(root==NULL){
//             pair<int,int> p =make_pair(0,0);
//             return p;
//         }
        
//         pair<int,int> leftside=solve(root->left);
//         pair<int,int> rightside=solve(root->right);
        
//         pair<int,int> res;
//         res.first=root->data+leftside.second+rightside.second;
        
//         res.second=max(leftside.first,leftside.second)+max(rightside.first,rightside.second);
        
//         return res;
//     }
//     //Function to return the maximum sum of non-adjacent nodes.
//     int getMaxSum(Node *root) 
//     {
//         pair<int,int> ans=solve(root);
//         return max(ans.first,ans.second);
//     }
// };