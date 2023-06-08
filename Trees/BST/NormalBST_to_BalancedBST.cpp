// //Normal BST to Balanced BST
// /*************************************************************
//     Following is the Binary Serach Tree node structure

//     template <typename T>
//     class TreeNode
//     {
//     public :
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~TreeNode() {
//             if (left)
//                 delete left;
//             if (right)
//                 delete right;
//         }
//     };

// *************************************************************/
// void inorder(TreeNode<int>* root,vector<int> & inorderStore){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left,inorderStore);
//     inorderStore.push_back(root->data);
//     inorder(root->right,inorderStore);
// }

// TreeNode<int>* inorderToBST(vector<int> &inorderStore, int s,int e) {
//     if(s>e){
//         return NULL;
//     }
//     int mid=(s+e)/2;
//     TreeNode<int>* head=new TreeNode<int>(inorderStore[mid]);

//     head->left=inorderToBST( inorderStore, s, mid-1);

//     head->right=inorderToBST( inorderStore, mid+1,e);

//     return head;
// }
// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//     // Write your code here.
//     vector<int> inorderStore;
//     inorder(root,inorderStore);

//     return inorderToBST(inorderStore,0,inorderStore.size()-1);
// }
