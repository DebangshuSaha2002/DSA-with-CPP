// //Permutation in String
// //Leetcode - https://leetcode.com/problems/permutation-in-string/description/

// class Solution {
// private:
//     bool checkEqual(vector<int> &count1,vector<int> &count2){
//         for(int i=0;i<26;i++){
//             if(count1[i]!=count2[i]){
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
//     bool checkInclusion(string s1, string s2) {
//         vector<int> count1(26,0);
//         for(int i=0;i<s1.length();i++){
//             int index=s1[i]-'a';
//             count1[index]++;
//         }

//         int windowsize=s1.size();
//         int i=0;
        
//         vector<int> count2(26,0);
//         while(i<windowsize && i<s2.length()){
//             int index=s2[i]-'a';
//             count2[index]++;
//             i++;
//         }

//         if(checkEqual(count1,count2)==true){
//             return true;
//         }

//         while(i<s2.size()){
//             int index=s2[i]-'a';

//             count2[index]++;

//             char oldchar=s2[i-windowsize];
//             int pos=oldchar-'a';
//             count2[pos]--;
//             i++;
//             if(checkEqual(count1,count2)==true){
//                 return true;
//             }
//         }

//         return false;
//     }
// };