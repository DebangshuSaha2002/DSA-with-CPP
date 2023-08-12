#include<iostream>
using namespace std;


void solve(int n,string *arr){
    if(n==0){
        return;
    }
    solve(n/10,arr);
    cout<<arr[n%10]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n=1346;
    solve(n,arr);
    return 0;
}