//https://leetcode.com/problems/koko-eating-bananas/

// class Solution {
//     private:
//         double calc (int mid, vector<int> &piles){
//             double k=0;
//             for(int i=0;i<piles.size();i++){
//                 k = k + ceil((double(piles[i])/(double)mid));
//             }
//             return k;
//         }
    
//         int maximum(vector<int> &piles){
//             int maxi = INT_MIN;
//             for(int i=0;i<piles.size();i++){
//                 maxi=max(maxi, piles[i]);
//             }
//             return maxi;
//         }
//     public:
//         int minEatingSpeed(vector<int>& piles, int h) {
//             int low = 1;
//             int high = maximum(piles);
//             while(low<=high){
//                 int mid = (low+high)/2;
//                 double k =calc(mid,piles);
//                 if(k<=h){
//                     high = mid-1;
//                 }else{
//                     low=mid+1;
//                 }
//             }
//             return low;
//         }
//     };