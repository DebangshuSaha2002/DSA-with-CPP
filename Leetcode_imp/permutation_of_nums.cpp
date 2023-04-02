//Finding the power set of the given string
#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int> nums,vector<vector<int> > &ans,int index){
    if(index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        solve(nums,ans,index+1);
        //backtrack
        swap(nums[index],nums[i]);
    }
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    vector <vector<int> > ans;
    int index=0;
    solve(nums,ans,index);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}