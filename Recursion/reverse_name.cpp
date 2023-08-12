#include<iostream>
#include<algorithm>
using namespace std;

void solve(string &name){
    int start=0;
    int end=8;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int main(){
    string name="Debangshu";
    solve(name);
    for(int i=0;i<9;i++){
        cout<<name[i]<<" ";
    }
    return 0;
}