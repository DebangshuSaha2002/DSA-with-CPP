//Implement k queue's in an array

#include<iostream>
#include<queue>
using namespace std;

class kqueue{
    public:
    int *front;
    int *rear;
    int *next;
    int *arr;
    int freespot;
    int n;
    int k;
    public:
    kqueue(int n,int k)
    {
        this->n=n; //n=size of the array
        this->k=k; //k=number of queues to be implements in the stack
        freespot=0; //Keeping track for where to enqueue the next element
        front=new int[k]; //front is an array of size k...all indexes initialized to 0
        rear=new int[k]; //rear is an array of size k...all indexes initialized to 0
        for(int i=0;i<k;i++)
        {
            front[i]=-1;
            rear[i]=-1;
        }

        next=new int[n];
        for(int i=0;i<n-1;i++)
        {
            next[i]=i+1; //next will keep the value of the next place where to insert
        }
        next[n-1]=-1; //last value of next will be -1

        arr=new int[n];
    }

    void enqueue(int data,int qn)
    {
        //oveflow check
        if(freespot==-1)
        {
            cout<<"Queue is full";
            return;
        }
        //first element;
        int index=freespot;
        freespot=next[index]; //after first element free spot has to be updated

        if(front[qn-1]==-1)  //If this element is the first one
        {
            front[qn-1]=index;
        }
        else //It is not the first element
        {
            next[rear[qn-1]]=index;
        }
        next[index]=-1;
        rear[qn-1]=index;
        arr[index]=data;
    }



    int dequeue(int qn)
    {
        //check for underflow
        if(front[qn-1]==-1){
            cout<<"Underflow condition for queue";
            return -1;
        }
        //finding index of the element to dequeue
        int index=front[qn-1];
        //incrementing the value of front
        front[qn-1]=next[index];
        //setting up the index and freespot
        next[index]=freespot;
        freespot=index;

        return arr[index];
    }
};
int main()
{
    kqueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(20,1);
    q.enqueue(300,2);
    q.enqueue(40,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    return 0;
}