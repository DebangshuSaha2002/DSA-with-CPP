//Interleave the first half of the queue with the 2nd half
//GFG

#include<iostream>
#include<queue>
#include<stack>
using namespace std;


queue<int> interleave_solve(queue<int> &q)
{
    stack<int> st;
    int count=0;
    int s=q.size()/2;
    while(count<s)
    {
        int val=q.front();
        q.pop();
        st.push(val);
        count++;
    }

    while(!st.empty())
    {
        int val=st.top();
        st.pop();
        q.push(val);
    }
    count=0;
    while(count<s)
    {
        int val=q.front();
        q.pop();
        q.push(val);
        count++;
    }
    count=0;
    while(count<s)
    {
        int val=q.front();
        q.pop();
        st.push(val);
        count++;
    }

    
    while(!st.empty())
    {
        int val=q.front();
        int num=st.top();
        st.pop();
        q.push(num);
        q.pop();
        q.push(val);
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