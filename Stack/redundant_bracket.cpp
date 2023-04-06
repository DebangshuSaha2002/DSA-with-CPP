// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {
//     // Write your code here.
//     stack<char> st;
//     for(int i=0;i<s.length();i++)
//     {
//         char ch=s[i];
//         if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
//             st.push(ch);
//         }
//         else{
//             bool isredundant=true;
//             if(ch==')')
//             {
//                 while(st.top()!='(')
//                 {
//                     // bool isredundant=true;
//                     char c=st.top();
//                     if(c=='+' || c=='-' || c=='*' || c=='/')
//                     {
//                         isredundant=false;
//                     }
//                     st.pop();
//                 }

//                 if (isredundant == true) {
//                   return true;
//                 }
//                 st.pop();
//             }
//         }
//     }
//     return false;
// }
