//check whether a num is prime or not using recursion

#include<iostream>
using namespace std;

bool solve(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}

bool solveit(int n,int count,int i){
    if(count>=1)
    {
        return false;
    }
    bool ans=true;
    if(i<n && n%i==0){
        ans=solveit(n,count+1,i+1);
    }
    else if(i<n){
        ans=solveit(n,count,i+1);
    }
    return ans;
}

int main(){
    int n=13;
    
    // bool ans = solve(n);
    bool ans=solveit(n,0,2);
    cout<<"Is prime : "<< ans<<endl;
}