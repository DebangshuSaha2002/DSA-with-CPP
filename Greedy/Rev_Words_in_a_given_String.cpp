//Reverse words in a given string
//GFG - https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbWdkejFpU0pULWc5dTMtNk8teWtQdHRVMkt6QXxBQ3Jtc0ttRS0xdVRYYXZBLU9mekpRWXhlWmZrUFl0WUtsSngwa0c4ZmVRdHhocnVPbUdCcWxnQUZGcnB6Q2R4WnY4Q3BoTF9XOEZQZ1ZaS1JvMFVtRDNVYVVxd1ZpbFlybDFjc203VGVlNDhLeVZ1NkU2WE1ydw&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Freverse-words-in-a-given-string5459%2F1&v=HZOUwKCKF5o

// class Solution
// {
//     public:
//     //Function to reverse words in a given string.
//     string reverseWords(string S) 
//     { 
//         string val="";
//         string temp="";
//         string ans="";
//         int index=S.length()-1;
//         while(index>=0){
//             if(S[index]=='.'){
//                 for(int i=0;i<val.size();i++){
//                     temp=temp+val[i];
//                 }
//                 reverse(temp.begin(),temp.end());
//                 temp.push_back('.');
//                 ans=ans+temp;
//                 temp="";
//                 val="";
//             }else{
//                 val.push_back(S[index]);
//             }
//             index--;
//         }
        
//         for(int i=0;i<val.size();i++){
//             temp=temp+val[i];
//         }
//         reverse(temp.begin(),temp.end());
//         ans=ans+temp;
        
//         return ans;
//     } 
// };