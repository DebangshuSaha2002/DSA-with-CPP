//reversing a string using stack
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <char> st;
    string str="debangshu";

    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
    }

    string rev="";
    while(!st.empty())
    {
        rev.push_back(st.top());
        st.pop();
    }

    cout<<"The reversed string is:"<<rev<<endl;
}