//https://practice.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-multiplications-to-reach-end

// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// // User function Template for C++

// class Solution {
//   public:
//     int minimumMultiplications(vector<int>& arr, int start, int end) {
//         if(start==end){
//             return 0;
//         }
//         vector<int> dist(100000,1e9);
//         dist[start]=0;
//         queue<pair<int,int> > q;
//         q.push({start,0});
//         int MOD=100000;
//         while(!q.empty()){
//             auto it=q.front();
//             int node=it.first;
//             int num=it.second;
//             q.pop();
//             for(auto i:arr){
//                 int mul=(node*i)%MOD;
//                 if(num+1<dist[mul]){
//                     dist[mul]=num+1;
//                     if(mul==end){
//                         return num+1;
//                     }
//                     q.push({mul,num+1});   
//                 }
//             }
//         }
//         if(dist[end]==1e9){
//             return -1;
//         }
//     }
// };


// //{ Driver Code Starts.

// int main() {

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         int start, end;
//         cin >> start >> end;
//         Solution obj;
//         cout << obj.minimumMultiplications(arr, start, end) << endl;
//     }
// }

// // } Driver Code Ends