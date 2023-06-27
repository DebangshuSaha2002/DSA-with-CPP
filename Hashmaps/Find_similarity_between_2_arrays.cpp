// // Find_similarity_between_2_arrays.cpp
// // https://www.codingninjas.com/studio/problems/find-similarities-between-two-arrays_1229070?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0

// #include <bits/stdc++.h> 
// pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
// {
// 	unordered_map <int,string> trace;
// 	int intersection=0;
// 	int all=0;
// 	for(int i=0;i<arr1.size();i++){
// 		trace[arr1[i]]="true";
// 		all+=1;
// 	} 

// 	for(int i=0;i<arr2.size();i++){
// 		if(trace[arr2[i]]=="true"){
// 			intersection+=1;
// 		}
// 		else{
// 			all+=1;
// 		}
// 	}
// 	pair <int,int> p;
// 	p.first=intersection;
// 	p.second=all;
// 	return p;
// }