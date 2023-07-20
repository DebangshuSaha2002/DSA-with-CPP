// //In this bottom up approach we make use of tabulation
#include<iostream>
#include<vector>

using namespace std;

// int main(){
//     cout<<"Enter the number:";
//     int n;
//     cin>>n;
//     //Step-1 
//     vector<int> dp(n+1);
    
//     //Step-2
//     dp[0]=0;
//     dp[1]=1;

//     //Step-3 
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }

//     cout<<"The "<<n<<"th fibonacci number is:"<<dp[n]<<endl;
//     return 0;
// }

//In this code we can do space optimiation as follows

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    //step 1
    int curr=1;
    int prev=0;
    if(n==0){
        cout<<"The "<<n<<"th fibonacci number is:"<<prev<<endl;
        exit(0);
    }
    int val=0;
    for(int i=2;i<=n;i++){
        val=prev+curr;
        prev=curr;
        curr=val;
    }
    cout<<"The "<<n<<"th fibonacci number is:"<<curr<<endl; 
    return 0;
}