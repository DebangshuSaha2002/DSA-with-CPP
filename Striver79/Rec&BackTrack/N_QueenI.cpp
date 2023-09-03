// N queen prob I in Leetcode

// class Solution {
// public:
//     bool isSafe(int row,int col,vector<string> &board,int n){
//         int x=row;
//         int y=col;
//         while(y>=0){
//             if(board[x][y]=='Q'){
//                 return false;
//             }
//             y--;
//         }

//         x=row;
//         y=col;
//         while(y>=0 && x>=0){
//             if(board[x][y]=='Q'){
//                 return false;
//             }
//             x--;
//             y--;
//         }

//         x=row;
//         y=col;
//         while(x<n && y>=0){
//             if(board[x][y]=='Q'){
//                 return false;
//             }
//             x++;
//             y--;
//         }
//         return true;
//     }
//     void solve(vector<vector<string> > &ans,vector<string> &board,int n,int col){
//         if(col==n){
//             ans.push_back(board);
//             return;
//         }

//         for(int row=0;row<n;row++){
//             if(isSafe(row,col,board,n)){
//                 board[row][col]='Q';
//                 solve(ans,board,n,col+1);
//                 board[row][col]='.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string> > ans;
//         vector<string> board(n);
//         string s(n,'.');
//         for(int i=0;i<n;i++){
//             board[i]=s;
//         }
//         solve(ans,board,n,0);
//         return ans;
//     }
// };