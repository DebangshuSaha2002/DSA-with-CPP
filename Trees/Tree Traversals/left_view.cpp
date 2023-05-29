// vector<int> leftView(Node *root)
// {
//    vector<int>ans;
//    queue<pair<Node*,int> >q;
//    map<int,int>m;
//    if(root==NULL){
//        return ans;
//    }
//    q.push(make_pair(root,0));
//    while(!q.empty()){
//        pair<Node*,int> p=q.front();
//        q.pop();
//        Node * frontNode=p.first;
//        int hd=p.second;
//        if(m.find(hd)==m.end()){
//            m[hd]=frontNode->data;
//        }
       
//        if(frontNode->left){
           
//            q.push(make_pair(frontNode->left,hd+1));
//        }
//        if(frontNode->right){
           
//            q.push(make_pair(frontNode->right,hd+1));
//        }
//    }
//    for(auto i:m){
//        ans.push_back(i.second);
//    }
//    return ans;
// }