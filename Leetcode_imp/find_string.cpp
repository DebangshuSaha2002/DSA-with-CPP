#include<iostream>
using namespace std;

int find_index(string str1,string str2)
{
    int n=str1.length();
    int m=str2.length();
    if(m>n)
    {
        return -1;
    }
    else if(n==0)
    {
        return -1;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            bool found=true;
            for(int j=0;j<m;j++)
            {
                if(str1[i+j]!=str2[j])
                {
                    found=false;
                    break;
                }
            }
            if(found==true)
            {
                return i;
            }
        }
        return -1;
    }
}

int main()
{
    string str1="mynameismyname";
    string str2="na";
    int index=find_index(str1,str2);
    cout<<"Index of first occurance of "<<str2<<" is "<<index<<endl;
}