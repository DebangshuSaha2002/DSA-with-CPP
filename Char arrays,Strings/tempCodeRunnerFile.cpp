#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){
    string S="aaaaaaaa";
    int i=0;
    while(!S.empty() && i<S.size()-1){
        int j=i+1;
        if(S[i]==S[j]){
            S.erase(i,2);
            i=-1;
        }
        i++;
    }
    cout<<S<<endl;
}