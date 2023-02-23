#include<iostream>
#include<string>
using namespace std;

void remove(string ss)
{
    string sss="c1 O$d@eeD o1c";
    string ans="";
    for(int i=0;i<sss.size();i++)
    {
        if(isalnum(sss[i]) && !isdigit(sss[i]))
        {
            ans+=sss[i];
        }
        else
        {
            continue;
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]>='A' && ans[i]<='Z')
        {
            ans[i]=ans[i]+32;
        }
    }
    cout<<ans;
}

int main()
{
    string ss="He71$%hs#g& a";
    remove(ss);
}