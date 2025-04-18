//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

// class Solution {
// private: 
//     bool possible(int day, vector<int> &bloomDay, int m, int k){
//         int cnt = 0;
//         int NumOfBouq = 0;
//         for(int i=0;i<bloomDay.size();i++){
//             if(bloomDay[i]<=day){
//                 cnt+=1;
//             }else{
//                 NumOfBouq = NumOfBouq + (cnt/k);
//                 cnt=0;
//             }
//         }
//         NumOfBouq = NumOfBouq + (cnt/k);
//         if(NumOfBouq >= m){
//             return true;
//         }        
//         return false;
//     }
// public:
//     int minDays(vector<int>& bloomDay, int m, int k) {
//         long long val = m * 1ll * k * 1ll;
//         if(val>bloomDay.size()) return -1;
//         int mini = *min_element(bloomDay.begin(), bloomDay.end());
//         int maxi = *max_element(bloomDay.begin(), bloomDay.end());

//         // for(int i = mini;i<=maxi;i++){
//         //     if(possible(i, bloomDay, m, k)){
//         //         return i;
//         //     }
//         // }
        
//         //using Binary search instead of the above O(maxi - mini) Time complexity
//         int ans = 0;
//         int low = mini;
//         int high = maxi;
//         while(low<=high){
//             int mid = (low+high)/2;
//             if(possible(mid, bloomDay, m, k)){
//                 high = mid-1;
//             }else{
//                 low = mid+1;
//             }
//         }
//         return low;
//     }
// };