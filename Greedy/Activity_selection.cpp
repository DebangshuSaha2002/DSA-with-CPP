//GFG - https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1
//Activity selection problem

// class Solution
// {
//     public:
//     static bool cmp(pair<int,int> &a, pair<int,int> &b){
//         return a.second<b.second;
//     }
//     //Function to find the maximum number of activities that can
//     //be performed by a single person.
//     int activitySelection(vector<int> start, vector<int> end, int n)
//     {
//         vector<pair<int,int> > startendpair;
//         for(int i=0;i<n;i++){
//             startendpair.push_back({start[i],end[i]});
//         }
        
//         //now sort on the basis of end day
//         sort(startendpair.begin(),startendpair.end(),cmp);
        
//         int startDay=startendpair[0].first;
//         int endDay=startendpair[0].second;
//         int count=1;
        
//         for(int i=1;i<n;i++){
//             if(startendpair[i].first>endDay){
//                 count+=1;
//                 endDay=startendpair[i].second;
//             }
//         }
//         return count;
//     }
// };