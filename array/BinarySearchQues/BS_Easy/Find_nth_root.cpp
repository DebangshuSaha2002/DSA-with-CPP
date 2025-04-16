#include<iostream>
using namespace std;
int solve(int mid, int n, int m){
    int ans = 1;
    for(int i=1;i<=m;i++){
        ans = ans*mid;
    }
    if(ans == n) return 0;
    else if(ans<n) return 1;
    else if(ans>n) return 2;
    return -1;
}

int calculate(int n, int m){
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = (low+high)/2;
        int ans = solve(mid,n,m);
        if(ans == 0) return mid;
        if(ans == 1){
            low=mid+1;
        }
        else if(ans == 2){
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    //find the nth root of a number
    int n = 27; //number whose root we want
    int m = 3; //nth root (3rd root)

    cout<<"The "<<m<<"th root of "<<n<<" is "<<calculate(n,m);
}