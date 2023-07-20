// //FInd the minimum elements
// //https://www.codingninjas.com/studio/problems/minimum-elements_3843091?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// //Solve AGAIN

//#include <bits/stdc++.h> 

// int solveRec(vector<int> &num, int x){
//     if(x==0){
//         return 0;
//     }

//     if(x<0){
//         return INT_MAX;
//     }

//     int mini=INT_MAX;
//     for(int i=0;i<num.size();i++){
//         int ans=solveRec(num,x-num[i]);
//         if(ans!=INT_MAX){
//             mini=min(mini,1+ans);
//         }
//     }
//     return mini;
// }


//Using recursion + memoization
// int solveMem(vector<int> &num, int x,vector<int> &dp){
//     if(x==0){
//         return 0;
//     }

//     if(x<0){
//         return INT_MAX;
//     }

//     if(dp[x]!=-1){
//         return dp[x];
//     }

//     int mini=INT_MAX;
//     for(int i=0;i<num.size();i++){
//         int ans=solveMem(num,x-num[i],dp);
//         if(ans!=INT_MAX){
//             mini=min(mini,1+ans);
//         }
//     }
//     dp[x]=mini;
//     return mini;
// }

//using tabulation
int solveTab(vector<int> &num, int x){
    vector<int> dp(x+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<num.size();j++){
            if(dp[i-num[j]]!=INT_MAX && i-num[j]>=0){
                dp[i]=min(dp[i],1+dp[i-num[j]]);
            }
        }
    }
    if(dp[x]==INT_MAX){
        return -1;
    }
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
    return solveTab(num,x);
}