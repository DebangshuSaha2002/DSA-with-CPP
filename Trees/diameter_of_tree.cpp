// class Solution {
//   private:
//     int height(Node * root){
//         if(root==NULL){
//             return 0;
//         }
//         int a1=height(root->left);
//         int a2=height(root->right);
//         int ans=max(a1,a2)+1;
//         return ans;
//     }  
//   public:
//     // Function to return the diameter of a Binary Tree.
//     int diameter(Node* root) {
//         // Your code here
//         if(root==NULL){
//             return 0;
//         }
//         int op1=diameter(root->left);
//         int op2=diameter(root->right);
//         int op3=height(root->left)+height(root->right)+1;
        
//         int ans=max(op1,max(op2,op3));
//         return ans;
//     }
// };

//First case is that only check left subtree
//Second case is that only check right subtree
//Thirs case is to check both left and right. So, for that calculate
//the height of left and right subtree and return the max of it