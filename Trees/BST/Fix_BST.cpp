//FIX BST and return root
// https://www.codingninjas.com/studio/problems/fix-bst_873137?leftPanelTab=0

// /*
//     Following is Binary Tree Node structure:
//     class TreeNode
//     {
//     public:
//         int data;
//         TreeNode *left, *right;
//         TreeNode() : data(0), left(NULL), right(NULL) {}
//         TreeNode(int x) : data(x), left(NULL), right(NULL) {}
//         TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
//     };
// */
// // public:

// void inorder(TreeNode* root,TreeNode* &first,TreeNode* &mid,TreeNode* &last,TreeNode* &prev){
//     if(root==NULL){
//         return;
//     }

//     inorder(root->left,first,mid,last,prev);

//     if(prev!=NULL && prev->data>root->data){
//         if(first==NULL){
//             //first fault
//             first=prev;
//             mid=root;
//         }else{
//             last=root;
//         }
//     }
//     prev=root;

//     inorder(root->right,first,mid,last,prev);
// }

// TreeNode* ans(TreeNode* root){
//     TreeNode * first;
//     TreeNode * mid;
//     TreeNode * last;
//     TreeNode * prev;
//     first=mid=last=NULL;
//     prev=new TreeNode(INT_MIN);

//     inorder(root,first,mid,last,prev);

//     if(first&&last){
//         swap(first->data,last->data);
//     }
//     else if(first&&mid){
//         swap(first->data,mid->data);
//     }

//     return root;
// }

// TreeNode * FixBST(TreeNode * root){
//     return ans(root);

// }