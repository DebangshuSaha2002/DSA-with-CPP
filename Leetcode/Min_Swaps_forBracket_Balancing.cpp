//Min swaps for bracket balancing 
//GFG-https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// class Solution{   
// public:
//     int minimumNumberOfSwaps(string S){
//         int extra=0;
//         int ans=0;
//         for(auto i:S){
//             if(i=='['){
//                 if(extra>0){
//                     ans+=extra;
//                 }
//                 extra--;
//             }else if(i==']'){
//                 extra++;
//             }
//         }
//         return ans;
//     }
// };