#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;

static bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.second<b.second;
}

void printVector(vector<int> array){
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int activitySelection(vector<int> start,vector<int> end,int n,int &compare){
    vector<pair<int,int> > startendpair;
    vector<int> ans;
    ans.push_back(0);
    for(int i=0;i<n;i++){
        startendpair.push_back(make_pair(start[i],end[i]));
    }

    sort(startendpair.begin(),startendpair.end(),cmp);

    int startDay=startendpair[0].first;
    int endDay=startendpair[0].second;
    int count=1;
    
    for(int i=1;i<n;i++){
        compare++;
        if(startendpair[i].first>endDay){
            count++;
            endDay=startendpair[i].second;
            ans.push_back(i);
        }
    }

    //printing the values
    cout<<"The activities selected are:";
    printVector(ans);
    return count;
}

int main(){
    int ele = 10;
    vector<int> start;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 100);

    for (int i = 0; i < ele; i++) {
        int val = dist(gen);
        start.push_back(val);
    }
    printf("The Start Vector is : ");
    printVector(start);
    vector<int> end;
    for (int i = 0; i < ele; i++) {
        int val = dist(gen);
        end.push_back(val);
    }
    cout<<endl;
    printf("The End Vector is : ");
    printVector(end);

    int compare=0;
    int ans=activitySelection(start,end,ele,compare);

    cout<<"The count is:"<<ans<<endl;
    cout<<"\nNumber of comaparisons are : "<<compare<<endl;
    return 0;
}


