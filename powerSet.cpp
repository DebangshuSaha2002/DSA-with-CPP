#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int> num,int index,vector<int>output, vector<vector<int> > &ans){
    if(index>=num.size()){
        ans.push_back(output);
        return;
    }

    //call for exclude
    solve(num,index+1,output,ans);
    //for include
    //first include the element into the output
    int element=num[index];
    output.push_back(element);
    //include call
    solve(num,index+1,output,ans);

}
int main(){
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    vector<int> output;
    vector<vector<int> > ans;
    solve(num,0,output,ans);
    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}