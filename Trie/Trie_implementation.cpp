#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }   
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        //assigning a null value to the root node
        root=new TrieNode('\0');
    }
    void insertUtil(TrieNode * root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }

        //considering that all the words are in small letters
        int index=word[0]-'a';
        TrieNode* child;

        //Present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            //Absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root, string word){
        if(word.length()==0){
            return root->isTerminal;
        }

        //Considering that all the words are in small letters
        int index=word[0]-'a';
        TrieNode * child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }
        return searchUtil(child,word.substr(1));
    }

    bool search(string word){
        return searchUtil(root,word);
    }

    void removeUtil(TrieNode * root,string word){
        if(word.length()==0){
            root->isTerminal=false;
            return;
        }

        int index=word[0]-'a';
        TrieNode * child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            cout<<"Word is not present"<<endl;
        }
        removeUtil(root,word.substr(1));
    }
    void removeWord(string word){
        removeUtil(root,word);
    }

};

int main()
{
    Trie * t = new Trie();
    t->insertWord("hello");
    t->insertWord("help");


    cout<<"Present or not:"<<t->search("hel")<<endl;
    cout<<"Present or not:"<<t->search("help")<<endl;
    // t->removeWord("abcd");
    // cout<<"Present or not:"<<t->search("abcd")<<endl;
    return 0;
}

/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

// class TrieNode{
//     public:
//     char data;
//     TrieNode * children[26];
//     bool isTerminal;
//     TrieNode(char ch){
//         data=ch;
//         for(int i=0;i<26;i++){
//             children[i]=NULL;
//         }
//         isTerminal=false;
//     }
// };

// class Trie {
//     TrieNode * root;
// public:
//     /** Initialize your data structure here. */
//     Trie() {
//         root=new TrieNode('\0');
//     }

//     /** Inserts a word into the trie. */
//     void insertUtil(TrieNode * root,string word){
//         //base case
//         if(word.length()==0){
//             root->isTerminal=true;
//             return;
//         }

//         int index=word[0]-'a';
//         TrieNode * child;

//         if(root->children[index]!=NULL){
//             //present
//             child=root->children[index];
//         }
//         else{
//             //absent
//             child=new TrieNode(word[0]);
//             root->children[index]=child;
//         }
//         insertUtil(root,word.substr(1));
//     }
//     void insert(string word) {
//         insertUtil(root,word);
//     }

//     /** Returns if the word is in the trie. */
//     bool searchUtil(TrieNode * root,string word){
//         if(word.length()==0){
//             return root->isTerminal;
//         }

//         int index=word[0]-'a';
//         TrieNode * child;
//         if(root->children[index]!=NULL){
//             child=root->children[index];
//         }
//         else{
//             return false;
//         }
//         return searchUtil(root,word.substr(1));
//     }

//     bool search(string word) {
//         return searchUtil(root,word);
//     }

//     /** Returns if there is any word in the trie that starts with the given prefix. */
//     bool searchPrefix(TrieNode * root,string prefix){
//         if(prefix.length()==0){
//             return true;
//         }

//         int index=prefix[0]-'a';
//         TrieNode * child;

//         if(root->children[index]!=NULL){
//             child=root->children[index];
//         }
//         else{
//             return false;
//         }
//         return searchPrefix(root,prefix.substr(1));
//     }

//     bool startsWith(string prefix) {
//         return searchPrefix(root,prefix);
//     }
// };