// Given inorder and postorder traversals of a Binary Tree in the 
// arrays in[] and post[] respectively. The task is to construct 
// the binary tree from these traversals.

 

// Example 1:

// Input:
// N = 8
// in[] = 4 8 2 5 1 6 3 7
// post[] =8 4 5 2 6 7 3 1
// Output: 1 2 4 8 5 3 6 7
// Explanation: For the given postorder and
// inorder traversal of tree the  resultant
// binary tree will be
//            1
//        /      \
//      2         3
//    /  \      /  \
//   4    5    6    7
//    \
//      8
 

// Example 2:

// Input:
// N = 5
// in[] = 9 5 2 3 4
// post[] = 5 9 3 4 2
// Output: 2 9 5 4 3
// Explanation:  
// the  resultant binary tree will be
//            2
//         /     \
//        9       4
//         \     /
//          5   3
 

// Your Task:
// You do not need to read input or print anything. Complete the 
// function buildTree() which takes the inorder, postorder traversals 
// and the number of nodes in the tree as input parameters and 
// returns the root node of the newly constructed Binary Tree.


// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };*/

// //Function to return a tree created from postorder and inoreder traversals.
// void createmapping(int in[],int n, map<int,int> &nodetoindex){
//     for(int i=0;i<n;i++){
//         nodetoindex[in[i]]=i;
//     }
// }

// Node * solve(int in[],int post[],int n,int instart,int inend,int &index, map<int,int> &nodetoindex){
//     if(index<0 || instart>inend){
//         return NULL;
//     }
    
//     int element=post[index--];
//     Node * root=new Node(element);
//     int position=nodetoindex[element];
    
//     root->right=solve(in,post,n,position+1,inend,index,nodetoindex);
//     root->left=solve(in,post,n,instart,position-1,index,nodetoindex);
    
//     return root;
// }
// Node *buildTree(int in[], int post[], int n) {
//     int postorderindex=n-1;
//     map<int,int> nodetoindex;
//     createmapping(in,n,nodetoindex);
//     Node *ans=solve(in,post,n,0,n-1,postorderindex,nodetoindex);
//     return ans;
// }