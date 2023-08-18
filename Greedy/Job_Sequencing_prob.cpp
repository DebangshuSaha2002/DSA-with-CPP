//Job Sequencing problem ***
//GFG - https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1

// /*
// struct Job 
// { 
//     int id;	 // Job Id 
//     int dead; // Deadline of job 
//     int profit; // Profit if job is over before or on deadline 
// };
// */

// class Solution 
// {
//     public:
//     static bool cmp(Job a,Job b){
//         return a.profit>b.profit;
//     }
//     //Function to find the maximum profit and the number of jobs done.
//     vector<int> JobScheduling(Job arr[], int n) 
//     { 
//         sort(arr,arr+n,cmp);
//         int maxDeadline=INT_MIN;
//         for(int i=0;i<n;i++){
//             maxDeadline=max(maxDeadline,arr[i].dead);
//         }
        
//         vector<int> schedule(maxDeadline+1,-1);
//         int maxProfit=0;
//         int count=0;
//         for(int i=0;i<n;i++){
//             int profit=arr[i].profit;
//             int deadline=arr[i].dead;
//             int jobid=arr[i].id;
            
//             for(int k=deadline;k>0;k--){
//                 if(schedule[k]==-1){
//                     schedule[k]=jobid;
//                     maxProfit+=profit;
//                     count++;
//                     break;
//                 }
//             }
//         }
//         vector<int> ans;
//         ans.push_back(count);
//         ans.push_back(maxProfit);
//         return ans;
//     } 
// };

// //{ Driver Code Starts.
// // Driver program to test methods 
// int main() 
// { 
//     int t;
//     //testcases
//     cin >> t;
    
//     while(t--){
//         int n;
        
//         //size of array
//         cin >> n;
//         Job arr[n];
        
//         //adding id, deadline, profit
//         for(int i = 0;i<n;i++){
//                 int x, y, z;
//                 cin >> x >> y >> z;
//                 arr[i].id = x;
//                 arr[i].dead = y;
//                 arr[i].profit = z;
//         }
//         Solution ob;
//         //function call
//         vector<int> ans = ob.JobScheduling(arr, n);
//         cout<<ans[0]<<" "<<ans[1]<<endl;
//     }
// 	return 0; 
// }



// // } Driver Code Ends