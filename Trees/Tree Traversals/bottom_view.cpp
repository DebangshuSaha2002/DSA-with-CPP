// class Solution {
//   public:
//     vector <int> bottomView(Node *root) {
//         map<int,int> m;
//         queue<pair<Node*,int> >q;
//         vector<int> ans;
//         if(root==NULL){
//             return ans;
//         }
//         q.push(make_pair(root,0));
//         while(!q.empty()){
//             pair<Node*,int> p=q.front();
//             q.pop();
//             Node * frontNode=p.first;
//             int hd=p.second;
//             m[hd]=frontNode->data;
//             if(frontNode->left){
//                 q.push(make_pair(frontNode->left,hd-1));
//             }
//             if(frontNode->right){
//                 q.push(make_pair(frontNode->right,hd+1));
//             }
//         }
//         for(auto i:m){
//             ans.push_back(i.second);
//         }
//         return ans;
//     }
// };