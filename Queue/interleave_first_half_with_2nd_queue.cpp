//Interleaving first half with 2nd using queue
//Interleave the first half of the queue with the 2nd half
//GFG

#include<iostream>
#include<queue>
#include<stack>
using namespace std;


queue<int> interleave_solve(queue<int> &q)
{
    queue<int> newq;
    int count=0;
    int s=q.size()/2;
    while(count<s)
    {
        int val=q.front();
        q.pop();
        newq.push(val);
        count++;
    }

    while(!newq.empty())
    {
        int val=newq.front();
        newq.pop();
        q.push(val);
        int num=q.front();
        q.pop();
        q.push(num);
    }
    return q;
}
int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);

    interleave_solve(q);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}