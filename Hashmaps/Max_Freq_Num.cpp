//finding the max freq of a number
//If 2 numbers are having the same freq then returning the one which appears first
//or has lower index

// int maximumFrequency(vector<int> &arr, int n)
// {
//     unordered_map <int,int> count;
//     int maxFreq=0;
//     int maxAns=0;
//     for(int i=0;i<arr.size();i++){
//         count[arr[i]]++;
//         maxFreq=max(maxFreq,count[arr[i]]);
//     }

//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         if(maxFreq==count[arr[i]]){
//             maxAns=arr[i];
//             break;
//         }
//     }
//     return maxAns;
// }