// Given a binary tree and a node data called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.
// Note: The tree contains unique values.


// Example 1:

// Input:      
//           1
//         /   \
//       2      3
//     /  \      \
//    4    5      6
//        / \      \
//       7   8      9
//                    \
//                    10
// Target Node = 8
// Output: 7
// Explanation: If leaf with the value 
// 8 is set on fire. 
// After 1 sec: 5 is set on fire.
// After 2 sec: 2, 7 are set to fire.
// After 3 sec: 4, 1 are set to fire.
// After 4 sec: 3 is set to fire.
// After 5 sec: 6 is set to fire.
// After 6 sec: 9 is set to fire.
// After 7 sec: 10 is set to fire.
// It takes 7s to burn the complete tree.
// Example 2:

// Input:      
//           1
//         /   \
//       2      3
//     /  \      \
//    4    5      7
//   /    / 
//  8    10
// Target Node = 10
// Output: 5

// Your Task:  
// You don't need to read input or print anything. Complete the 
// function minTime() which takes the root of the tree and target 
// as input parameters and returns the minimum time required to 
// burn the complete binary tree if the target is set on fire at 
// the 0th second.

// struct Node {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
// */
// class Solution {
//   public:
//     Node * createMapping(Node* root,int target,map<Node*, Node*> &nodeToParent){
        
//         Node * result=NULL;
        
//         queue<Node*>q;
//         q.push(root);
//         nodeToParent[root]=NULL;
//         while(!q.empty()){
//             Node * front=q.front();
//             q.pop();
            
//             if(front->data==target){
//                 result=front;
//             }
            
//             if(front->left){
//                 nodeToParent[front->left]=front;
//                 q.push(front->left);
//             }
            
//             if(front->right){
//                 nodeToParent[front->right]=front;
//                 q.push(front->right);
//             }
//         }
//         return result;
//     }
    
//     int burntree(Node * root,map<Node*, Node*> &nodeToParent){
        
//         map<Node * ,bool> visited;
//         queue<Node *>q;
//         q.push(root);
//         visited[root]=true;
        
//         int time=0;
//         while(!q.empty()){
//             bool flag=false;
//             int size=q.size();
//             for(int i=0;i<size;i++){
//                 Node * front=q.front();
//                 q.pop();
//                 if(front->left && !visited[front->left]){
//                     flag=true;
//                     q.push(front->left);
//                     visited[front->left]=true;
//                 }
                
//                 if(front->right && !visited[front->right]){
//                     flag=true;
//                     q.push(front->right);
//                     visited[front->right]=true;
//                 }
                
//                 if(nodeToParent[front] && !visited[nodeToParent[front]]){
//                     flag=true;
//                     q.push(nodeToParent[front]);
//                     visited[nodeToParent[front]]=true;                    
//                 }
//             }
//             if(flag==true){
//                 time++;
//             }
//         }
//         return time;
//     }
    
//     int minTime(Node* root, int target) 
//     {
//         map<Node * ,Node *> nodeToParent;
//         Node * result=createMapping(root,target,nodeToParent);
        
//         int ans=burntree(result,nodeToParent);
//         return ans;
//     }
// };