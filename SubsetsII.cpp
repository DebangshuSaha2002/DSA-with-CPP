//Leetcode - https://leetcode.com/problems/subsets-ii/description/

// class Solution {
// public:
//     void solve(vector<int> nums,vector<int> outputs,set<vector<int> >& ans,int index){
//         if(index>=nums.size()){
//             ans.insert(outputs);
//             return;
//         }

//         outputs.push_back(nums[index]);
//         solve(nums,outputs,ans,index+1);
//         outputs.pop_back();
//         solve(nums,outputs,ans,index+1);
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         vector<int> outputs;
//         set<vector<int> > ans;
//         solve(nums,outputs,ans,0);
//         vector<vector<int> > FA;
//         for(auto it=ans.begin();it!=ans.end();it++){
//             FA.push_back(*it);
//         }
//         return FA;
//     }
// };