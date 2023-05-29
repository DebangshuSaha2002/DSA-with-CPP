// // Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
// // A path may start from any node and end at any node in the downward direction.


// // Example 1:

// // Input:      
// // Tree = 
// //           1                               
// //         /   \                          
// //        2     3
// // K = 3
// // Output: 2
// // Explanation:
// // Path 1 : 1 + 2 = 3
// // Path 2 : only leaf node 3
// // Example 2:

// // Input: 
// // Tree = 
// //            1
// //         /     \
// //       3        -1
// //     /   \     /   \
// //    2     1   4     5                        
// //         /   / \     \                    
// //        1   1   2     6    
// // K = 5                    
// // Output: 8
// // Explanation:
// // The following paths sum to K.  
// // 3 2 
// // 3 1 1 
// // 1 3 1 
// // 4 1 
// // 1 -1 4 1 
// // -1 4 2 
// // 5 
// // 1 -1 5 

// // Your Task:  
// // You don't need to read input or print anything. Complete the function sumK() which takes root node and integer K as input parameters and returns the number of paths that have sum K. Since the answer may be very large, compute it modulo 109+7.


// // Expected Time Complexity: O(N)
// // Expected Auxiliary Space: O(Height of Tree)


// // Constraints:
// // 1 ≤ N ≤ 105
// // -105 ≤ Node Value ≤ 105
// // -109 ≤ k ≤ 109

// struct Node 
// {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */
// class Solution{
//   public:
//     void solve(Node * root,int k,vector<int> path,int &count){
//         if(root==NULL){
//             return;
//         }
//         path.push_back(root->data);
//         //go left
//         solve(root->left,k,path,count);
//         //go right
//         solve(root->right,k,path,count);
//         int sum=0;
//         int size=path.size();
//         for(int i=size-1;i>=0;i--){
//             sum=sum+path[i];
//             if(sum==k){
//                 count++;
//             }
//         }
//         path.pop_back();
//     }
    
//     int sumK(Node *root,int k)
//     {
//         vector<int> path;
//         int count=0;
//         solve(root,k,path,count);
//         return count;
//     }
// };