//Leetcode - https://leetcode.com/problems/course-schedule/

// class Solution {
// public:
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
//         if(prerequisites.size()==0) return true;

//         vector<int> adj[numCourses];
// 		for (auto it : prerequisites) {
// 			adj[it[1]].push_back(it[0]);
// 		}

//         //create the indegree vectors
//         vector<int> indegree(numCourses,0);
//         for(int i=0;i<numCourses;i++){
//             for(auto it:adj[i]){
//                 indegree[it]++;
//             }
//         }

//         int cnt=0;
//         queue<int> q;
//         //put the ele with indegree 0 into the queue;
//         for(int i=0;i<numCourses;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }

//         while(!q.empty()){
//             int node = q.front();
//             q.pop();
//             cnt++;
//             for(auto it:adj[node]){
//                 indegree[it]--;
//                 if(indegree[it]==0) q.push(it);
//             }
//         }
//         cout<<cnt;
//         if(cnt==numCourses) return true;
//         return false;
//     }
// };