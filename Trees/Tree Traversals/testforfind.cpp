#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    vector<int> ans;
    vector<int> :: iterator it;
    ans.push_back(1);
    ans.push_back(10);
    ans.push_back(12);
    ans.push_back(0);
    ans.push_back(4);
    ans.push_back(7);
    ans.push_back(9);
    ans.push_back(10);

    it=find(ans.begin(),ans.end(),12);
    cout<<(it-ans.begin())<<endl;

}