// class Solution {
// public:
//     void printleft(Node * root,vector <int> & ans){
//         if((root==NULL)||(root->left==NULL && root->right==NULL)){
//             return;
//         }
//         ans.push_back(root->data);
//         if(root->left){
//             printleft(root->left,ans);
//         }
//         else{
//             printleft(root->right,ans);
//         }
//     }
    
//     void printleaf(Node * root,vector<int> & ans){
//         if(root==NULL){
//             return;
//         }
//         if(root->left==NULL && root->right==NULL){
//             ans.push_back(root->data);
//             return;
//         }
        
//         printleaf(root->left,ans);
//         printleaf(root->right,ans);
//     }
    
//     void printright(Node * root,vector<int> & ans){
//         if((root==NULL)||(root->left==NULL && root->right==NULL)){
//             return;
//         }
//         if(root->right){
//             printright(root->right,ans);
//         }
//         else{
//             printright(root->left,ans);
//         }
//         ans.push_back(root->data);
//     }
    
//     vector <int> boundary(Node *root)
//     {
//         vector<int>ans;
//         if(root==NULL){
//             return ans;
//         }
//         ans.push_back(root->data);
//         //print left side boundary except leaf
//         printleft(root->left,ans);
        
//         //print the leaf nodes
//         printleaf(root->left,ans);
//         printleaf(root->right,ans);
        
//         //print right sie boundary except leaf
//         printright(root->right,ans);
//         return ans;
//     }
// };