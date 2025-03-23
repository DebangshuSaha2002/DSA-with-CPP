// class Solution {
//     public:
//         vector<vector<int>> threeSum(vector<int>& nums) {
//             // //better approach
//             // //using a hashset
//             // set<vector<int>> hashSet;
//             // for(int i=0;i<nums.size();i++){
//             //     set<int> st;
//             //     for(int j=i+1;j<nums.size();j++){
//             //         int third = -(nums[i]+nums[j]);
//             //         if(st.find(third)!=st.end()){
//             //             vector<int> temp = {nums[i],nums[j],third};
//             //             sort(temp.begin(),temp.end());
//             //             hashSet.insert(temp);
//             //         }
//             //         st.insert(nums[j]);
//             //     }
//             // }
//             // vector<vector<int>> ans(hashSet.begin(), hashSet.end());
//             // return ans;
    
//             //OPTIMAL SOLUTION
//             vector<vector<int>> ans;
//             sort(nums.begin(), nums.end());
//             for(int i=0;i<nums.size();i++){
//                 if(i!=0 && nums[i]==nums[i-1]) continue;
//                 int j=i+1;
//                 int k=nums.size()-1;
    
//                 while(j<k){
//                     int sum = nums[i]+nums[j]+nums[k];
//                     if(sum<0){
//                         j++;
//                     }else if(sum > 0){
//                         k--;
//                     }else{
//                         vector<int> temp = {nums[i],nums[j],nums[k]};
//                         ans.push_back(temp);
//                         j++;
//                         k--;
//                         while(j<k && nums[j]==nums[j-1]) j++;
//                         while(j<k && nums[k]==nums[k+1]) k--;
//                     }
//                 }
//             }
//             return ans;
//         }
//     };