//Longest increasing subsequenece
//https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends


// class Solution
// {
//     public:
    
//     int solve(int n,int a[],int curr,int prev){
//         if(curr==n){
//             return 0;
//         }
//         int take=0;
//         if(prev==-1 || a[curr]>a[prev]){
//             take=1+solve(n,a,curr+1,curr);
//         }
        
//         int notTake=0 + solve(n,a,curr+1,prev);
        
//         return max(take,notTake);
//     }
    
//     int solveMem(int n,int a[],int curr,int prev,vector<vector<int> > &dp){
//         if(curr==n){
//             return 0;
//         }
        
//         if(dp[curr][prev+1]!=-1){
//             return dp[curr][prev+1];
//         }
        
//         int take=0;
//         if(prev==-1 || a[curr]>a[prev]){
//             take=1+solveMem(n,a,curr+1,curr,dp);
//         }
        
//         int notTake=0 + solveMem(n,a,curr+1,prev,dp);
        
//         return dp[curr][prev+1]=max(take,notTake);
//     }
    
//     int solveTab(int n,int a[]){
//         vector<vector<int> > dp(n+1,vector<int>(n+1,0));
//         //curr goes from n-1 to 0
//         //prev stays one step behind the curr
//         //so prev goes from curr-1 to -1
//         for(int curr=n-1;curr>=0;curr--){
//             for(int prev=curr-1;prev>=-1;prev--){
//                 int take=0;
//                 if(prev==-1 || a[curr]>a[prev]){
//                     take=1+dp[curr+1][curr+1];
//                 }
                
//                 int notTake=0 + dp[curr+1][prev+1];
//                 dp[curr][prev+1]=max(take,notTake);
//             }
//         }
        
//         return dp[0][0];
//     }
    
//     int solveTabSO(int n,int a[]){
//         vector<int> currR(n+1,0);
//         vector<int> nextR(n+1,0);
//         //curr goes from n-1 to 0
//         //prev stays one step behind the curr
//         //so prev goes from curr-1 to -1
//         for(int curr=n-1;curr>=0;curr--){
//             for(int prev=curr-1;prev>=-1;prev--){
//                 int take=0;
//                 if(prev==-1 || a[curr]>a[prev]){
//                     take=1+nextR[curr+1];
//                 }
                
//                 int notTake=0 + nextR[prev+1];
//                 currR[prev+1]=max(take,notTake);
//             }
//             nextR=currR;
//         }
        
//         return nextR[0];
//     }
    
//     int solveOptimal(int n,int a[]){
//         if(n==0){
//             return 0;
//         }
//         vector<int> ans;
//         ans.push_back(a[0]);
//         for(int i=1;i<n;i++){
//             if(a[i]>ans.back()){
//                 ans.push_back(a[i]);
//             }
//             else{
//                 //finding the index of the just greater element
//                 int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
//                 ans[index]=a[i];
//             }
//         }
//         return ans.size();
//     }
//     //Function to find length of longest increasing subsequence.
//     int longestSubsequence(int n, int a[])
//     {
//     //   return solve(n,a,0,-1);
//         // vector<vector<int> > dp(n,vector<int> (n+1,-1));
//         // return solveMem(n,a,0,-1,dp);
        
//         // return solveTab(n,a);
//         // return solveTabSO(n,a);
        
//         return solveOptimal(n,a);
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     //taking total testcases
//     int t,n;
//     cin>>t;
//     while(t--)
//     {
//         //taking size of array
//         cin>>n;
//         int a[n];
        
//         //inserting elements to the array
//         for(int i=0;i<n;i++)
//             cin>>a[i];
//         Solution ob;
//         //calling method longestSubsequence()
//         cout << ob.longestSubsequence(n, a) << endl;
//     }
// }

// // } Driver Code Ends