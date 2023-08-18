//GFG - https://practice.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1
//Check if possible to survive on island

// class Solution{
// public:
//     int minimumDays(int S, int N, int M){
        
//         int sunday=S/7;
//         int buyingDays=S-sunday;
//         int ans=0;
//         if((S*M)%N==0){
//             ans = (S*M)/N;
//         }
//         else{
//             ans = ((S*M)/N) + 1;
//         }
        
//         if(ans<=buyingDays){
//             return ans;
//         }
//         return -1;
        
//     }
// };