#include<iostream>
#include<stack>
using namespace std;

bool check(string str)
{
    stack <char> stk;
    for(char c : str)
    {
        if(c=='(' || c=='{' || c=='[')
        {
            stk.push(c);
        }
        else
        {
            if(stk.empty())
            {
                return false;
            }
        }

        char top=stk.top();
        stk.pop();
        if((top=='(' && c!=')') || (top=='{' && c!='}') || (top=='[' && c!=']'))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str="{}()[]";
    if(check(str))
    {
        cout<<"All the brackets are balanced";
    }
    else{
        cout<<"Brackets arent balanced";
    }
}