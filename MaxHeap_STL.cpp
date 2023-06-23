#include<iostream>
#include<queue>
using namespace std;
int main(){
    //This is max heap using priority queue
    priority_queue<int> pq;
    pq.push(4);
    pq.push(3);
    pq.push(5);
    pq.push(2);

    cout<<"Top element is:"<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element is:"<<pq.top()<<endl;

    cout<<"Size of the max heap is: "<<pq.size()<<endl;

    if(pq.empty()){
        cout<<"Max heap is empty"<<endl;
    }
    else{
        cout<<"Max heap is not empty"<<endl;
    }
}