//Reverse the queue using stack

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

queue<int>reverse (queue<int> &q)
{
    stack<int> s;
    while(!q.empty())
    {
        int val=q.front();
        s.push(val);
        q.pop();
    }

    while(!s.empty()){
        int val=s.top();
        q.push(val);
        s.pop();
    }
    return q;
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(7);
    q.push(9);
    q.push(6);
    q.push(3);

    reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}