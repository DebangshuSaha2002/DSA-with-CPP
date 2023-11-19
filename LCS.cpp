#include<iostream>
#include<vector>
using namespace std;

int LCS(string str1,string str2,int i,int j,vector<vector<int> > &dp){
    if(i>=str1.size()){
        return 0;
    }

    if(j>=str2.size()){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans;
    if(str1[i]==str2[j]){
        ans=1+LCS(str1,str2,i+1,j+1,dp);
    }else{
        ans=max(LCS(str1,str2,i+1,j,dp),LCS(str1,str2,i,j+1,dp));
    }

    return dp[i][j]=ans;

}

int main(){
    string str1="ababaabaa";
    string str2="aababaab";
    vector<vector<int> > dp(str1.size(),vector<int> (str2.size(),-1));
    int ans=LCS(str1,str2,0,0,dp);
    cout<<"Ans is : "<<ans<<endl;
    return 0;
}