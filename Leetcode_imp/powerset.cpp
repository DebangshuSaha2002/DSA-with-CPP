//Finding the power set of the given string
#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int> nums,vector<vector<int> > &ans,vector<int> output,int index){
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,ans,output,index+1);

    //include
    int element=nums[index];
    output.push_back(element);
    solve(nums,ans,output,index+1);
}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    vector <vector<int> > ans;
    vector<int> output;
    int index=0;
    solve(nums,ans,output,index);
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