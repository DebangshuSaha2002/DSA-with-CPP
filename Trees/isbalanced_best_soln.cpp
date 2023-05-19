// /*This is the best approach to find whether the tree is balanced or not
// It does it in O(n) time complexity
// A tree is considered balanced if the difference between the height
// of the left and right subtree is atmost 1.....ans this is for every node
// and not just the root node

// Here a pair is used of type <bool,int> where bool is storing whether the
// tree is balanced or not and int is storing the height
// */


// class Solution{
//     public:
//     pair<bool,int> isBalancedFast(Node * root){
//         if(root==NULL){
//             pair<bool,int> p=make_pair(true,0);
//             return p;
//         }
        
//         pair<bool,int> left=isBalancedFast(root->left);
//         pair<bool,int> right=isBalancedFast(root->right);;
        
//         bool leftans=left.first;
//         bool rightans=right.first;
//         bool diff=abs(left.second-right.second)<=1;
        
//         pair<bool,int> ans;
//         ans.second=max(left.second,right.second)+1;
//         if(leftans && rightans && diff){
//             ans.first=true;
//         }
//         else{
//             ans.first=false;;
//         }
//         return ans;
//     }
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         return isBalancedFast(root).first;
//     }
