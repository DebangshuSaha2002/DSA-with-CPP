#include<iostream>
#include<vector>
using namespace std;

int LCS(string s1,string s2){
    int m=s1.size();
    int n=s2.size();
    int c[m+1][n+1];
    for(int i=0;i<=m;i++){
        c[0][i]=0;
    }

    for(int j=0;j<=n;j++){
        c[j][0]=0;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1]){
                c[i][j]=c[i-1][j-1]+1;
            }else if(c[i-1][j]>c[i][j-1]){
                c[i][j]=c[i-1][j];
            }else{
                c[i][j]=c[i][j-1];
            }
        }
    }
    cout<<endl;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    

    int i=m;
    int j=n;
    vector<char> lcs;
    cout<<endl;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            lcs.push_back(s1[i-1]);
            i--;
            j--;
        }else if (c[i-1][j]>c[i][j-1]){
            i--;
        }else{
            j--;
        }
    }

    for(int k=lcs.size()-1;k>=0;k--){
        cout<<lcs[k]<<" ";
    }

    return c[m][n];
}

int main(){
    string s1="abcd";
    string s2="axbycd";

    int length=LCS(s1,s2);
    cout<<"\nLength of LCS is:"<<length<<endl;
    return 0;
}