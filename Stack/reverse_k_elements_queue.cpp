//Reverse the k elements from a queue

// Input:
// 5 3
// 1 2 3 4 5

// Output: 
// 3 2 1 4 5

// Explanation: 
// After reversing the given
// input from the 3rd position the resultant
// output will be 3 2 1 4 5.



//{ Driver Code Starts
// Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;
// queue<int> modifyQueue(queue<int> q, int k);
// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n, k;
//         cin >> n >> k;
//         queue<int> q;
//         while (n-- > 0) {
//             int a;
//             cin >> a;
//             q.push(a);
//         }
//         queue<int> ans = modifyQueue(q, k);
//         while (!ans.empty()) {
//             int a = ans.front();
//             ans.pop();
//             cout << a << " ";
//         }
//         cout << endl;
//     }
// }
// // } Driver Code Ends


// // User function Template for C++

// // Function to reverse first k elements of a queue.
// queue<int> modifyQueue(queue<int> q, int k) {
//     stack <int> st;
//     int count=0;
//     while(count<k)
//     {
//         int val=q.front();
//         st.push(val);
//         q.pop();
//         count++;
//     }
    
//     while(!st.empty())
//     {
//         int val=st.top();
//         q.push(val);
//         st.pop();
//     }
//     int n=q.size();
//     for(int i=0;i<(n-k);i++)
//     {
//         int val=q.front();
//         q.pop();
//         q.push(val);
//     }
    
//     return q;
    
// }