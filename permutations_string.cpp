//Print all the possible permutations in a string
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

void solve(vector<char>nums, int index, vector<vector<char>>& ans)
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
    vector<char> nums;
    nums.push_back('a');
    nums.push_back('b');
    nums.push_back('c');

    int index=0;
    vector<vector<char>>ans;
    solve(nums,index,ans);

    //sorting in lexicographical order

    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}