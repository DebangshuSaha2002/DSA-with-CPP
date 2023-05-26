//Given a binary tree of size N. Your task is to complete the 
// function sumOfLongRootToLeafPath(), that find the sum of all nodes on 
// the longest path from root to leaf node.
// If two or more paths compete for the longest path, then the path 
// having maximum sum of nodes is being considered.

// Input: 
//         4        
//        / \       
//       2   5      
//      / \ / \     
//     7  1 2  3    
//       /
//      6
// Output: 13
// Explanation:
//         4        
//        / \       
//       2   5      
//      / \ / \     
//     7  1 2  3 
//       /
//      6

// The highlighted nodes (4, 2, 1, 6) above are 
// part of the longest root to leaf path having
// sum = (4 + 2 + 1 + 6) = 13

// // structure of the node of the binary tree is as
// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int x)
//     {
//         data = x;
//         left = NULL;
//         right = NULL;
//     }
// };
// */
// class Solution
// {
// public:
//     void solve(Node * root,int len,int &maxSum,int sum,int &maxLen){
//         if(root==NULL){
//             if(len>maxLen){
//                 maxLen=len;
//                 maxSum=sum;
//             }
//             else if(len==maxLen){
//                 maxSum=max(maxSum,sum);
//             }
//             return;
//         }
//         sum=sum+root->data;
//         solve(root->left,len+1,maxSum,sum,maxLen);
//         solve(root->right,len+1,maxSum,sum,maxLen);
//     }
//     int sumOfLongRootToLeafPath(Node *root)
//     {
//         int len=0;
//         int maxSum=INT_MIN;
//         int sum=0;
//         int maxLen=0;
//         solve(root,len,maxSum,sum,maxLen);
//         return maxSum;
        
//     }
// };