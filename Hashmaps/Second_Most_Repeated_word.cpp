// // Second_Most_Repeated_word.cpp
// // https://www.codingninjas.com/studio/problems/second-most-repeated-word_3210218?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

// #include <bits/stdc++.h> 
// string second_repeat(vector<string> &arr, int n){
//     unordered_map <string,int> count;
//     for (int i=0;i<arr.size();i++) {
//         count[arr[i]]++;
//     }

//     unordered_map<string,int> :: iterator it = count.begin();
    
//     int highestCount = INT_MIN;
//     int secondHighestCount = INT_MIN;
//     string mostRepeated = "";
//     string secondMostRepeated = "";

//     while (it != count.end()) {
//         int c = it->second;
//         if (c > highestCount) {
//             secondHighestCount = highestCount;
//             highestCount = c;
//             secondMostRepeated = mostRepeated;
//             mostRepeated = it->first;
//         } else if (c > secondHighestCount && c != highestCount) {
//             secondHighestCount = c;
//             secondMostRepeated = it->first;
//         }
//         it++;
//     }
//     return secondMostRepeated;
// }