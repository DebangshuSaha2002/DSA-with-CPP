// //https://www.codingninjas.com/studio/problems/0-1-knapsack_920542

// #include <bits/stdc++.h> 

// // int solve(vector<int> &weight, vector<int> &value, int index, int maxWeight){
// // 	if(index==0){
// // 		if(weight[index]<=maxWeight){
// // 			return value[index];
// // 		}
// // 		else{
// // 			return 0;
// // 		}
// // 	}

// // 	int incl=0;
// // 	if (weight[index] <= maxWeight) {
// // 		incl = value[index] + solve(weight, value, index - 1, maxWeight - weight[index]);
// // 	}
// // 	int excl = 0 + solve(weight, value, index - 1, maxWeight);
// // 	int ans = max(incl, excl);

// //     return ans;
// // }

// // int solveMem(vector<int> &weight, vector<int> &value, int index, int maxWeight,vector<vector<int> > &dp){
// // 	if(index==0){
// // 		if(weight[index]<=maxWeight){
// // 			return value[index];
// // 		}
// // 		else{
// // 			return 0;
// // 		}
// // 	}
// // 	if(dp[index][maxWeight]!=-1){
// // 		return dp[index][maxWeight];
// // 	}
// // 	int incl=0;
// // 	if (weight[index] <= maxWeight) {
// // 		incl = value[index] + solveMem(weight, value, index - 1, maxWeight - weight[index],dp);
// // 	}
// // 	int excl = 0 + solveMem(weight, value, index - 1, maxWeight,dp);
// // 	dp[index][maxWeight] = max(incl, excl);

// //     return dp[index][maxWeight];
// // }

// // int solveTab(vector<int> &weight, vector<int> &value, int n, int maxWeight){
// // 	vector<vector<int> > dp(n,vector<int> (maxWeight+1,0));
// // 	for(int w=weight[0];w<=maxWeight;w++){
// // 		if(weight[0]<=maxWeight){
// // 			dp[0][w]=value[0];
// // 		}
// // 		else{
// // 			dp[0][w]=0;
// // 		}
// // 	}
// // 	for(int index=1;index<n;index++){
// // 		for(int w=0;w<=maxWeight;w++){
// // 			int incl=0;
// // 			if (weight[index] <= w) {
// // 				incl = value[index] + dp[index - 1][w - weight[index]];
// // 			}
// // 			int excl = 0 + dp[index - 1][w];
// // 			dp[index][w] = max(incl, excl);
// // 		}
// // 	}

// //     return dp[n-1][maxWeight];
// // }


// int solveTabSOone(vector<int> &weight, vector<int> &value, int n, int maxWeight){
// 	// vector<int> prev(maxWeight+1);
// 	vector<int> curr(maxWeight+1);
// 	for(int w=weight[0];w<=maxWeight;w++){
// 		if(weight[0]<=maxWeight){
// 			curr[w]=value[0];
// 		}
// 		else{
// 			curr[w]=0;
// 		}
// 	}
// 	for(int index=1;index<n;index++){
// 		for(int w=maxWeight;w>=0;w--){
// 			int incl=0;
// 			if (weight[index] <= w) {
// 				incl = value[index] + curr[w - weight[index]];
// 			}
// 			int excl = 0 + curr[w];
// 			curr[w] = max(incl, excl);
// 		}
// 		// prev=curr;
// 	}

//     return curr[maxWeight];
// }
// int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
// {
// 	// vector<vector<int> > dp(n,vector<int> (maxWeight+1,-1));
// 	// return solveMem(weight,value,n-1,maxWeight,dp);
	
// 	//using tabulation
// 	// return solveTab(weight,value,n,maxWeight);

// 	return solveTabSOone(weight,value,n,maxWeight);
// }