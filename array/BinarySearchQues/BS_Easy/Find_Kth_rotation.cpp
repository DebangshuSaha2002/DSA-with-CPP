// https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation

// class Solution {
//     public:
//       int findKRotation(vector<int> &arr) {
//           //minimum value's index will be my ans
//           //so we will find the min value's index
//           int low = 0;
//           int high = arr.size()-1;
//           int ans = INT_MAX;
//           while(low<=high){
//               int mid = (low+high)/2;
//               if(arr[low]<=arr[mid]){
//                   ans = min(ans, arr[low]);
//                   low=mid+1;
//               }else{
//                   ans = min(ans, arr[mid]);
//                   high=mid-1;
//               }
//           }
//           int index = find(arr.begin(), arr.end(), ans) - arr.begin();
//           return index;
//       }
//   };