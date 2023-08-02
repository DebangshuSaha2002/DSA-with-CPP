//Maximum heights of stacking cuboids
//Leetcode-https://leetcode.com/problems/maximum-height-by-stacking-cuboids/description/
// class Solution {
// public:
//     bool check(vector<int> &a,vector<int> &b){
//         if(b[0]<=a[0] && b[1]<=a[1] && b[2]<=a[2]){
//             return true;
//         }
//         return false;
//     }
//     int solveOptimal(int n,vector<vector<int> > &a){
//         vector<int> currR(n+1,0);
//         vector<int> nextR(n+1,0);
//         //curr goes from n-1 to 0
//         //prev stays one step behind the curr
//         //so prev goes from curr-1 to -1
//         for(int curr=n-1;curr>=0;curr--){
//             for(int prev=curr-1;prev>=-1;prev--){
//                 int take=0;
//                 if(prev==-1 || check(a[curr],a[prev])){
//                     take=a[curr][2]+nextR[curr+1];
//                 }
                
//                 int notTake=0 + nextR[prev+1];
//                 currR[prev+1]=max(take,notTake);
//             }
//             nextR=currR;
//         }
        
//         return nextR[0];
//     }
//     int maxHeight(vector<vector<int>>& cuboids) {
//         //step1- first sorting the entire dimensions all the vectors
//         for(auto &vec:cuboids){
//             sort(vec.begin(),vec.end());
//         }

//         //step2- sorting on the basis of w or l
//         sort(cuboids.begin(),cuboids.end());

//         //now use the LIS logic
//         int n=cuboids.size();
//         return solveOptimal(n,cuboids);
//     }
// };