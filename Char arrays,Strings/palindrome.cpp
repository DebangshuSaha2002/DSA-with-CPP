//Reverse a string
#include<iostream>
using namespace std;

int getlength(string name)
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void palindrome(string name)
{
    string namecop=name;
    int s=0;
    int e=getlength(name)-1;
    while(s<=e)
    {
        swap(name[s++],name[e--]);
    }
    if(namecop==name)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}

int main()
{
    string name;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Total length="<<getlength(name)<<endl;
    palindrome(name);
}