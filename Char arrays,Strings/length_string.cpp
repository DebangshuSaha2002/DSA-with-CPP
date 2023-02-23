//Reverse a string
#include<iostream>
using namespace std;

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[])
{
    int s=0;
    int e=getlength(name)-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
    cout<<"Reversed name is:"<<name;
}

int main()
{
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Total length="<<getlength(name)<<endl;
    reverse(name);
}