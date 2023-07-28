// //https://www.codingninjas.com/studio/problems/minimum-coins_2180776?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// int solve(int n, vector<int> &days, vector<int> &cost,int index){
//     if(index>=n){
//         return 0;
//     }

//     int option1=cost[0]+solve(n,days,cost,index+1);
//     int i;
//     for(i=index;index<n && days[i]<days[index]+7;i++);

//     int option2=cost[1]+solve(n,days,cost,i);

//     for(i=index;index<n && days[i]<days[index]+30;i++);

//     int option3=cost[2]+solve(n,days,cost,i);

//     return min(option1,min(option2,option3));

// }

// int solveMem(int n, vector<int> &days, vector<int> &cost,int index,vector<int> &dp){
//     if(index>=n){
//         return 0;
//     }

//     if(dp[index]!=-1){
//         return dp[index];
//     }
//     int option1=cost[0]+solveMem(n,days,cost,index+1,dp);
//     int i;
//     for(i=index;index<n && days[i]<days[index]+7;i++);

//     int option2=cost[1]+solveMem(n,days,cost,i,dp);

//     for(i=index;index<n && days[i]<days[index]+30;i++);

//     int option3=cost[2]+solveMem(n,days,cost,i,dp);

//     dp[index]=min(option1,min(option2,option3));
//     return dp[index];
// }

// int solveTab(int n, vector<int> &days, vector<int> &cost){
//     vector<int> dp(n+1,INT_MAX);
//     dp[n]=0;
//     for(int k=n-1;k>=0;k--){
//         int option1=cost[0]+dp[k+1];
//         int i;
//         for(i=k;k<n && days[i]<days[k]+7;i++);

//         int option2=cost[1]+dp[i];

//         for(i=k;k<n && days[i]<days[k]+30;i++);

//         int option3=cost[2]+dp[i];

//         dp[k]=min(option1,min(option2,option3));
//     }
//     return dp[0];
// }

// int solveTabSO(int n, vector<int> &days, vector<int> &cost){
//     queue<pair<int,int> >week;
//     queue<pair<int,int> >month;
//     int ans=0;
//     //Eliminate the unnecessary days
//     for(int day:days){
//         while(!month.empty() && month.front().first+30 <= day){
//             month.pop();
//         }

//         while(!week.empty() && week.front().first+7 <= day){
//             week.pop();
//         }

//         //Step-2 Add cost for the current day
//         week.push(make_pair(day,ans+cost[1]));
//         month.push(make_pair(day,ans+cost[2]));

//         ans=min(ans+cost[0],min(week.front().second,month.front().second));
//     }
//     return ans;
// }
// int minimumCoins(int n, vector<int> days, vector<int> cost)
// {
//     // return solve(n,days,cost,0);

//     // vector<int> dp(n+1,-1);
//     // return solveMem(n,days,cost,0,dp);

//     // return solveTab(n,days,cost);

//     return solveTabSO( n, days, cost);
// }