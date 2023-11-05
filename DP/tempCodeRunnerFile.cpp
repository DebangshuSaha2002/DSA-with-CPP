#include<iostream>
#include<vector>
using namespace std;

int LCSlength(string str1,string str2,int i,int j){
    if(i>=str1.length()){
        return 0;
    }

    if(j>=str2.length()){
        return 0;
    }
    int ans=0;
    if(str1[i]==str2[j]){
        ans=1+LCSlength(str1,str2,i+1,j+1);
    }
    else{
        ans=max(LCSlength(str1,str2,i+1,j),LCSlength(str1,str2,i,j+1));
    }
    return ans;
}

int LCSlengthMem(string str1,string str2,int i,int j,vector<vector<int> > &dp){
    if(i>=str1.length()){
        return 0;
    }

    if(j>=str2.length()){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    
    int ans=0;
    if(str1[i]==str2[j]){
        ans=1+LCSlengthMem(str1,str2,i+1,j+1,dp);
    }
    else{
        ans=max(LCSlengthMem(str1,str2,i+1,j,dp),
        LCSlengthMem(str1,str2,i,j+1,dp));
    }
    return dp[i][j]=ans;
}

int main(){
    string str1="abcde";
    string str2="ace";
    vector<vector<int> > dp(str1.size(),vector<int>(str2.size(),-1));
    cout<<"Length of the LCS is :"<<LCSlengthMem(str1,str2,0,0,dp)<<endl;
    return 0;
}