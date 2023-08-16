// // ()()))((())) ans will be 6

// // GFG - https://practice.geeksforgeeks.org/problems/3b47f0ad00f953dd514235ddec54e39fdc297dda/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// //{ Driver Code Starts
// // Initial template for C++
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// // User function template for c++
// class Solution {
//   public:
//     int findMaxLen(string s) {
//         if(s.size()==1){
//             return 0;
//         }
//         int maxlen=0;
//         stack<int> st;
//         st.push(-1);
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='('){
//                 st.push(i);
//             }else{
//                 st.pop();
//                 if(st.empty()){
//                     st.push(i);
//                 }else{
//                     maxlen=max(maxlen,i-st.top());
//                 }
//             }
//         }
//         return maxlen;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string S;
//         cin >> S; 
//         Solution ob;
//         cout << ob.findMaxLen(S) << endl;
//     }
//     return 0;
// }

// // } Driver Code Ends