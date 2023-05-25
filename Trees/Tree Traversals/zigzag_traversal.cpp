// class Solution{
//     public:
//     //Function to store the zig zag order traversal of tree in a list.
//     vector <int> zigZagTraversal(Node* root)
//     {
//         queue<Node *> q;
//     	// Code here
//     	vector<int> result;
//     	int index;
//     	if(root==NULL){
//     	    return result;
//     	}
//     	q.push(root);
//     	bool leftToright=true;
//     	while(!q.empty()){
//     	    int size=q.size();
//     	    vector<int> ans(size);
//     	    for(int i=0;i<size;i++){
//     	        Node * frontnode=q.front();
//     	        q.pop();
    	        
//     	        if(leftToright){
//     	            index=i;
//     	        }
//     	        else{
//     	            index=size-i-1;
//     	        }
//     	        ans[index]=frontnode->data;
//     	        if(frontnode->left){
//     	            q.push(frontnode->left);
//     	        }
//     	        if(frontnode->right){
//     	            q.push(frontnode->right);
//     	        }
//     	    }
//     	    leftToright=!leftToright;
//     	    for(auto i:ans){
//     	    result.push_back(i);
//     	    }
//     	}
//     	return result;
//     }
// };