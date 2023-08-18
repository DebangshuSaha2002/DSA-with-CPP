//GFG - https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
//N meetings in one room 

// class Solution
// {
//     public:
//     static bool cmp(pair<int,int> &a , pair<int,int> &b){
//         return a.second < b.second;
//     }
//     //Function to find the maximum number of meetings that can
//     //be performed in a meeting room.
//     int maxMeetings(int start[], int end[], int n)
//     {
//         vector<pair<int,int> > startendpair;
//         for(int i=0;i<n;i++){
//             pair<int,int> p = make_pair(start[i],end[i]);
//             startendpair.push_back(p);
//         }
        
//         //i need to sort on the basis of the end time
//         sort(startendpair.begin(),startendpair.end(),cmp);
        
//         int currStartTime=startendpair[0].first;
//         int currEndTime=startendpair[0].second;
//         int c=1;
//         for(int i=1;i<n;i++){
//             if(startendpair[i].first > currEndTime){
//                 c++;
//                 currEndTime=startendpair[i].second;
//             }
//         }
//         return c;
//     }
// };