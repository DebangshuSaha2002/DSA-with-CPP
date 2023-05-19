// class Solution {
//   private:
//     pair<int,int> diam(Node * root){
//         if(root==NULL){
//             pair<int,int> p=make_pair(0,0);
//             return p;
//         }
        
//         pair<int,int> left=diam(root->left);
//         pair<int,int> right=diam(root->right);
        
//         int op1=left.first;
//         int op2=right.first;
//         int op3=left.second+right.second+1;
        
//         pair<int,int> ans;
        
//         ans.first=max(op1,max(op2,op3));
//         ans.second=max(left.second,right.second)+1;
        
//         return ans;
//     }  
//   public:
//     // Function to return the diameter of a Binary Tree.
//     int diameter(Node* root) {
//         // Your code here
//         return diam(root).first;
//     }
// };

// TC=O(n), approach is to use a pair that stores diameter as the first
//variable and height as the second and do the question accordingly.