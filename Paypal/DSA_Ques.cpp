// #include <iostream>
// #include <cmath>
// #include <cstdio>
// #include <string>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void solve(vector<string> balls, int index,vector<vector<string> > &ans){
    
//     //base case
    
//     if(index>=balls.size()){
//         ans.push_back(balls);
//         return;
//     }
    
//     for(int i=index;i<balls.size();i++){
//         swap(balls[i],balls[index]);
//         solve(balls,index+1,ans);
//         //backtracking
//         swap(balls[i],balls[index]);
//     }
    
// }

// int main() {
//     vector<string> balls;
//     balls.push_back("red"); //0
//     balls.push_back("red"); //1
//     balls.push_back("black"); //2
//     vector<vector<string> >ans;
//     solve(balls,0,ans);
    
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// // Your old code in python3 has been preserved below.
// // 1.Given a String array contains the different colours of balls.you have to arrange the balls in a manner which two adjacent balls are not the same.Return any possible Rearrangement or return empty list if not possible

// // Input string array of Size could be maximum length of 10^5;


// //  Eg: Input:Red,Black,white,Red,blue,Red,Red.

// //    O/p Red,Black,Red,blue,Red,White,Red
// Red 4 tines
// white 3
// black 2
// blue 1

// Red,white
// red 3 white 2
// Red,white

// Red 2 white 1,black 2 blue 1
// red,black
// red 1 ,2

// // Eg:   
// //         Input:Red,Red,Red,Black
// //         Output:””


// // Eg:
// //      input: [Red,Red,Black]
// //          Output:Red,Black,Red

// //   123
  
// //   123 red,red,black
// //   213 red,red,black
// //   312 black,red,red
// //   231 Red,black,red
// //   321
// //   132
  