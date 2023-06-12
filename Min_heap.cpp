#include<iostream>
#include<queue>
using namespace std;
int main(){
    //This is max heap using priority queue
    priority_queue<int , vector<int> , greater<int> > minHeap;
    minHeap.push(4);
    minHeap.push(3);
    minHeap.push(5);
    minHeap.push(2);

    cout<<"Top element is:"<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<"Top element is:"<<minHeap.top()<<endl;

    cout<<"Size of the min heap is: "<<minHeap.size()<<endl;

    if(minHeap.empty()){
        cout<<"Min heap is empty"<<endl;
    }
    else{
        cout<<"Min heap is not empty"<<endl;
    }
}