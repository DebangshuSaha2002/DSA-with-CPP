// // https://www.codingninjas.com/studio/problems/elements-occur-more-than-n-k-times_1113146?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
// #include <bits/stdc++.h> 
// vector<int> countTheNumber(vector<int> &arr, int n, int k) {
// 	// Write your code here.
// 	int val=n/k;
// 	unordered_map <int,int> count;
// 	for(int i=0;i<arr.size();i++){
// 		count[arr[i]]++;
// 	}

// 	vector<int> ans;

// 	unordered_map<int,int> :: iterator it=count.begin();
// 	while(it!=count.end()){
// 		if(it->second >= val){
// 			ans.push_back(it->first);
// 		}
// 		it++;
// 	}
// 	return ans;
// }