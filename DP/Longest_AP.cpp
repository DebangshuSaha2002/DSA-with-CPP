//Longest Arithmetic Progression
//GFG-https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1

// class Solution{   
// public:
//     int lengthOfLongestAP(int A[], int n) {
//         if(n<=2){
//             return n;
//         }
//         unordered_map<int,int> dp[n+1];
//         int ans=0;
//         for(int i=1;i<n;i++){
//             for(int j=0;j<i;j++){
//                 int diff=A[i]-A[j];
//                 int cnt=1;
//                 if(dp[j].count(diff)){
//                     cnt=dp[j][diff];
//                 }
                
//                 dp[i][diff]=1+cnt;
//                 ans=max(ans,dp[i][diff]);
//             }
//         }
//         return ans;
//     }
// };