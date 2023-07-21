// //Cut into segments - VIQ
// //Solve again 
// //https://www.codingninjas.com/studio/problems/cut-into-segments_1214651?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include<limits.h>
// // int solve(int n,int x,int y,int z){
// // 	if(n==0){
// // 		return 0;
// // 	}

// // 	if(n<0){
// // 		return INT_MIN;
// // 	}

// // 	int s1=solve(n-x,x,y,z)+1;
// // 	int s2=solve(n-y,x,y,z)+1;
// // 	int s3=solve(n-z,x,y,z)+1;

// // 	int ans=max(s1,max(s2,s3));
// // 	return ans;
// // }

// // int solveMem(int n,int x,int y,int z,vector<int> &dp){
// // 	if(n==0){
// // 		return 0;
// // 	}

// // 	if(n<0){
// // 		return INT_MIN;
// // 	}

// // 	if(dp[n]!=-1){
// // 		return dp[n];
// // 	}

// // 	int s1=solveMem(n-x,x,y,z,dp)+1;
// // 	int s2=solveMem(n-y,x,y,z,dp)+1;
// // 	int s3=solveMem(n-z,x,y,z,dp)+1;

// // 	dp[n]=max(s1,max(s2,s3));
// // 	return dp[n];
// // }

// int solveTab(int n,int x,int y,int z){
// 	vector<int> dp(n+1,INT_MIN);
// 	dp[0]=0;
// 	for (int i = 1; i <= n; i++) {
// 		if(i-x>=0)
// 			dp[i] = max(dp[i],dp[i - x] + 1);
		
// 		if(i-y>=0)
// 			dp[i] = max(dp[i],dp[i - y] + 1);

// 		if(i-z>=0)
// 			dp[i] = max(dp[i],dp[i - z] + 1);
// 	}
// 	if(dp[n]<0){
// 		return 0;
//     } else {
//         return dp[n];
//     }
// }

// int cutSegments(int n, int x, int y, int z) {
// 	// int ans=solve(n,x,y,z);
// 	// if(ans<=0){
// 	// 	return 0;
// 	// }
// 	// return ans;
	
// 	// vector<int> dp(n+1,-1);
// 	// int ans=solveMem(n,x,y,z,dp);
// 	// if(ans<=0){
// 	// 	return 0;
// 	// }
// 	// return ans;

// 	return solveTab(n,x,y,z);
	
// }