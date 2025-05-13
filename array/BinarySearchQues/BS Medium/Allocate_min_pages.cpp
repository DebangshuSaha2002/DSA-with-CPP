//https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1

// class Solution {
//   private:
//     int checkStudents(vector<int> &arr, int maxPages){
//         int students = 1;
//         int sum = 0;
//         for(int i=0;i<arr.size();i++){
//             if(sum + arr[i]<=maxPages){
//                 sum+= arr[i];
//             }else{
//                 students++;
//                 sum = arr[i];
//             }
//         }
//         return students;
//     }
    
//   public:
//     int findPages(vector<int> &arr, int k) {
//         // not possible case
//         if(k>arr.size()) return -1;
        
//         // code here
//         int low = *max_element(arr.begin(), arr.end());
//         int high = accumulate(arr.begin(), arr.end(), 0);
        
//         // for(int maxPages = low; maxPages <= high; maxPages++){
//         //     int students = checkStudents(arr, maxPages);
//         //     if(students==k){
//         //         return maxPages;
//         //     }
//         // }
//         // return low;
        
//         while(low<=high){
//             int mid = (low+high)/2;
//             int students = checkStudents(arr, mid);
//             if(students>k){
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }
//         return low;
//     }
// };

