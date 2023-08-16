//GFG-https://practice.geeksforgeeks.org/problems/longest-valid-parentheses5657/0


// class Solution{
// public:
//     int maxLength(string S){
//         if(S.size()==1){
//             return 0;
//         }
//         int maxlen=0;
//         stack<int> st;
//         st.push(-1);
//         for(int i=0;i<S.size();i++){
//             if(S[i]=='('){
//                 st.push(i);
//             }
//             else{
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