// #include<iostream>
// #include<vector>
// #include<queue>
// #include<utility>
// using namespace std;

// struct Node{
//     public:
//     int data;
//     Node * left;
//     Node * right;
//     Node(int data){
//         this->data=data;
//         left=NULL;
//         right=NULL;
//     }
// };

// struct cmp{
//     public:
//     bool operator()(Node * a,Node *b){
//         return a->data>b->data;
//     }
// };

// void traversal(Node * root,vector<string> &ans,string temp){
//     //Basically printing in preorder style
//     if(root->left==NULL && root->right==NULL){
//         ans.push_back(temp);
//         return;
//     }

//     //left side
//     traversal(root->left,ans,temp+'0');
//     //right side
//     traversal(root->right,ans,temp+'1');
// }

// vector<string> huffmanEncoding(string s,vector<int> freq){
//     priority_queue<Node *,vector<Node *>,cmp> pq;

//     for(int i=0;i<freq.size();i++){
//         Node * temp = new Node(freq[i]);
//         pq.push(temp);
//     }

//     while(pq.size()>1){
//         Node *left=pq.top();
//         pq.pop();

//         Node * right=pq.top();
//         pq.pop();

//         Node * newNode=new Node(left->data+right->data);
//         newNode->left=left;
//         newNode->right=right;
//         pq.push(newNode);
//     }

//     Node * root=pq.top();

//     vector<string> ans;
//     string store="";
//     traversal(root,ans,store);

//     return ans;
// }

// int main(){
//     string s;
//     cout<<"Enter the string:";
//     cin>>s;
//     int len=s.length();
//     vector<int> freq;
//     for(int i=0;i<len;i++){
//         int val;
//         cout<<"\nEnter the frequency for "<<s[i]<<" : ";
//         cin>>val;
//         freq.push_back(val);
//     }

//     vector<string> finalAnsStore;
//     finalAnsStore=huffmanEncoding(s,freq);
//     for(int i=0;i<finalAnsStore.size();i++){
//         cout<<finalAnsStore[i]<<endl;
//     }

    
//     return 0;
// }

#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

struct Node{
    public:
    int data;
    char alphabet;
    Node * left;
    Node * right;
    Node(char alphabet, int data){
        this->alphabet = alphabet;
        this->data = data;
        left=NULL;
        right=NULL;
    }
};

struct cmp{
    public:
    bool operator()(Node * a,Node *b){
        return a->data>b->data;
    }
};

void traversal(Node * root,vector<pair<char, string> >& ans,string temp){
    if(root->left==NULL && root->right==NULL){
        ans.push_back(make_pair(root->alphabet, temp));
        return;
    }

    traversal(root->left,ans,temp+'0');
    traversal(root->right,ans,temp+'1');
}

vector<pair<char, string> > huffmanEncoding(string s,vector<int> freq){
    priority_queue<Node *,vector<Node *>,cmp> pq;

    for(int i=0;i<freq.size();i++){
        Node * temp = new Node(s[i], freq[i]);
        pq.push(temp);
    }

    while(pq.size()>1){
        Node *left=pq.top();
        pq.pop();

        Node * right=pq.top();
        pq.pop();

        Node * newNode=new Node('\0', left->data+right->data); // Use a placeholder alphabet '\0' for internal nodes
        newNode->left=left;
        newNode->right=right;
        pq.push(newNode);
    }

    Node * root=pq.top();

    vector<pair<char, string> > ans; // Modified return type to store both the alphabet and the Huffman code
    string store="";
    traversal(root, ans, store);

    return ans;
}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int len=s.length();
    vector<int> freq;
    for(int i=0;i<len;i++){
        int val;
        cout<<"\nEnter the frequency for "<<s[i]<<" : ";
        cin>>val;
        freq.push_back(val);
    }

    vector<pair<char, string> > finalAnsStore; // Modified variable type to store both the alphabet and the Huffman code
    finalAnsStore=huffmanEncoding(s,freq);
    for(int i=0;i<finalAnsStore.size();i++){
        cout<<finalAnsStore[i].first << " : " << finalAnsStore[i].second << endl; // Print the alphabet and the corresponding Huffman code
    }

    return 0;
}