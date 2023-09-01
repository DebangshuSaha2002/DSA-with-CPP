#include<iostream>
#include<vector>

using namespace std;

void solve(vector<string> num,int index,vector<string>output, vector<vector<string> > &ans){
    if(index>=num.size()){
        if(output.size()>0)
            ans.push_back(output);
        return;
    }

    //call for exclude
    solve(num,index+1,output,ans);
    //for include
    //first include the element into the output
    string element=num[index];
    output.push_back(element);
    //include call
    solve(num,index+1,output,ans);

}
int main(){
    vector<string> num;
    num.push_back("a");
    num.push_back("b");
    num.push_back("c");
    vector<string> output;
    vector<vector<string> > ans;
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