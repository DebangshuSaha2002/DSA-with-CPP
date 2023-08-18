//GFG - https://practice.geeksforgeeks.org/problems/maximum-meetings-in-one-room/1
//maximum meetings in one room

// class Solution{
// public:
//     static bool cmp(pair<int,pair<int,int> > &a , pair<int,pair<int,int> >&b){
//         return a.second.second < b.second.second;
//     }
//     vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
//         vector<pair<int,pair<int,int> > > startendpair;
//         for(int i=0;i<N;i++){
//             startendpair.push_back({i+1,{S[i],F[i]}});
//         }
//         //sorted
//         sort(startendpair.begin(),startendpair.end(),cmp);

//         vector<int> ans;
//         int currStartTime=startendpair[0].second.first;
//         int currEndTime=startendpair[0].second.second;
//         ans.push_back(startendpair[0].first);
//         for(int i=1;i<N;i++){
//             if(startendpair[i].second.first > currEndTime){
//                 currEndTime=startendpair[i].second.second;
//                 ans.push_back(startendpair[i].first);
//             }
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };