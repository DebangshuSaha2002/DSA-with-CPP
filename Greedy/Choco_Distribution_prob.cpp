//GFG - https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
//Chocolate distribution problem

// class Solution{
//     public:
//     long long findMinDiff(vector<long long> a, long long n, long long m){
//         long long MinCost=INT_MAX;
//         sort(a.begin(),a.end());
//         int j=0;
//         while(m<=n){
//             long long start=a[j];
//             long long end=a[m-1];
//             long long diff=end-start;
//             MinCost=min(MinCost,diff);
//             j++;
//             m+=1;
//         }
//         return MinCost;
        
//     }   
// };