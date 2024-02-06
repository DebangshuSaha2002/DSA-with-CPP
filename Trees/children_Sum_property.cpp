// //Children Sum property

// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *left, *right;
//     Node()
//     {
//         this->data = 0;
//         left = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->left = NULL;
//         this->right = NULL;
//     }
//     Node(int data, Node* left, Node* right)
//     {
//         this->data = data;
//         this->left = left;
//         this->right = right;
//     }
// };
// */

// bool isParentSum(Node *root){
//     if(root==NULL || (root->left==NULL && root->right==NULL)){
//         return true;
//     }
//     else{
//         int child=0;
//         if(root->left){
//             child+=root->left->data;
//         }

//         if(root->right){
//             child+=root->right->data;
//         }

//         return (root->data==child) && isParentSum(root->left) && isParentSum(root->right);
//     }

// }