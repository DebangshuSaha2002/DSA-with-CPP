//CORRECT THE CODE, IT HAS ERROR

// /* A binary tree node
// struct Node
// {
//     int data;
//     Node* left, * right;
// }; */


// vector<int> diagonal(Node *root)
// {
//    vector<int> ans;
//    if(root==NULL){
//        return ans;
//    }
//    queue<pair<Node*,int> >q;
//    map<int,vector<int>>m;
//    q.push(make_pair(root,0));
//    while(!q.empty()){
//        pair<Node*,int> p=q.front();
//        q.pop();
//        Node* frontNode=p.first;
//        int diagLvl=p.second;
//        m[diagLvl].push_back(frontNode->data);
//        if(frontNode->left){
//            q.push(make_pair(frontNode->left,diagLvl-1));
//        }
//        if(frontNode->right){
//            q.push(make_pair(frontNode->right,diagLvl+1));
//        }
//    }
//    for(auto i:m){
//        for(auto j:i.second){
//            ans.push_back(j);
//        }
//    }
//    return ans;
// }