//Reference variable

#include<iostream>
using namespace std;

void update(int& n)
{
    n++;
}

int main()
{
    int n=5;
    cout<<"Before : "<<n<<endl;
    update(n);
    cout<<"After : "<<n<<endl;
}