//Longest Common Subsequence

#include<iostream>
#include<vector>
using namespace std;
void LCS(string str1,string str2){
    int m=str1.size();
    int n=str2.size();
    int C[m+1][n+1];
    for(int i=0;i<=m;i++){
        C[i][0]=0;
    }

    for(int j=0;j<=n;j++){
        C[0][j]=0;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(str1[i-1]==str2[j-1]){
                C[i][j]=C[i-1][j-1]+1;
            }else if(C[i-1][j]>C[i][j-1]){
                C[i][j]=C[i-1][j];
            }else{
                C[i][j]=C[i][j-1];
            }
        }
    }

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    
}

int LCSDP(string str1,string str2,int i,int j){
    if(i>=str1.size()){
        return 0;
    }

    if(j>=str2.size()){
        return 0;
    }
    int ans=0;
    if(str1[i]==str2[j]){
        ans=1+LCSDP(str1,str2,i+1,j+1);
    }else{
        ans=max(LCSDP(str1,str2,i+1,j),LCSDP(str1,str2,i,j+1));
    }

    return ans;
}
int main(){
    string str1="aabababa";
    string str2="bababbaab";

    LCS(str1,str2);

    // cout<<endl<<"Ans is:"<<LCSDP(str1,str2,0,0)<<endl;
    return 0;
}