/* Check whether the tree is balanced or not.
A tree is considered balanced if the difference between the height
of the left and right subtree is atmost 1.....ans this is for every node
and not just the root node

The solution below calls the height function within the diameter function
thus makes the T.C as O(n^2).

To do it in O(n) use a pair of <bool,int> type. Int is for storing the height
and bool for storing whether its balanced or not
*/

// class Solution{
//     private:
//     int height(Node * root){
//         if(root==NULL){
//             return 0;
//         }
//         int l=height(root->left);
//         int r=height(root->right);
//         return max(l,r)+1;
//     }
    
//     public:
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         if(root==NULL){
//             return true;
//         }
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
//         bool diff=abs(height(root->left)-height(root->right))<=1;
        
//         if(left&&right&&diff){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };