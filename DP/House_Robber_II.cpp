// //This is like the same max of non adjacent
// //But here we have the arrangement of houses 
// //done in the form of a circle
// //Which means that if the first house is included
// //The last house will have to be excluded and vice versa

// //So here we create 2 arrays one which includes 1st house and one which doesnt
// //and return the max of the 2 solutions

// //https://www.codingninjas.com/studio/problems/house-robber_839733?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include <bits/stdc++.h> 
// long long int solve(vector<int> &nums){
//     long long int prev2=0;
//     long long int prev1=nums[0];

//     for(int i=1;i<nums.size();i++){
//         long long int incl=prev2+nums[i];
//         long long int excl=prev1+0;
//         long long int ans=max(incl,excl);

//         prev2=prev1;
//         prev1=ans;
//     }
//     return prev1;
// }
// long long int houseRobber(vector<int>& valueInHouse)
// {
//     int n=valueInHouse.size();
//     if(n==1){
//         return valueInHouse[0];
//     }
//     vector<int> first,second;
//     for(int i=0;i<n;i++)
//     {
//         if(i!=0){
//             first.push_back(valueInHouse[i]);
//         }
//         if(i!=n-1){
//             second.push_back(valueInHouse[i]);
//         }
//     }

//     return max(solve(first),solve(second));
// }