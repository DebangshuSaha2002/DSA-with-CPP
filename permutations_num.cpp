#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int>nums, int index, vector<vector<int>>& ans)
{
    if(index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        solve(nums,index+1,ans);
        //backtracking
        swap(nums[index],nums[i]);
    }
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    int index=0;
    vector<vector<int>>ans;
    solve(nums,index,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}