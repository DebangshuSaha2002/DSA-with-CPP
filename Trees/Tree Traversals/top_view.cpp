// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };
// */
// class Solution
// {
//     public:
//     //Function to return a list of nodes visible from the top view 
//     //from left to right in Binary Tree.
//     vector<int> topView(Node *root)
//     {
//         vector<int> ans;
//         if(root==NULL){
//             return ans;
//         }
        
//         map<int,int> m;
//         queue<pair<Node *,int> >q;
//         q.push(make_pair(root,0));
        
//         while(!q.empty()){
//             pair<Node *,int> f=q.front();
//             q.pop();
//             Node * frontnode=f.first;
//             int hd=f.second;
//             if(m.find(hd)==m.end()){
//                 m[hd]=frontnode->data;
//             }
            
//             if(frontnode->left){
//                 q.push(make_pair(frontnode->left,hd-1));
//             }
//             if(frontnode->right){
//                 q.push(make_pair(frontnode->right,hd+1));
//             }
//         }
//         for(auto i:m){
//             ans.push_back(i.second);
//         }
//         return ans;
//     }

// };