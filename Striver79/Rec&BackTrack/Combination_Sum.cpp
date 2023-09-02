//Leetcode - https://leetcode.com/problems/combination-sum/description/

// class Solution {
// public:
//     void solve(vector<int>& candidates, int target,vector<vector<int> > &ans,vector<int> store,int index){
//         if(index==candidates.size()){
//             if(target==0){
//                 ans.push_back(store);
//             }
//             return;
//         }

//         //if am picking
//         if(candidates[index]<=target){
//             //then pick it up
//             store.push_back(candidates[index]);
//             solve(candidates,target-candidates[index],ans,store,index);
//             //pop back while backtracking
//             store.pop_back();
//         }

//         //not picking
//         solve(candidates,target,ans,store,index+1);
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int> > ans;
//         vector<int> store;
//         solve(candidates,target,ans,store,0);
//         return ans;
//     }
// };