#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"Enter the 1st num:";
    cin>>a;
    cout<<"\nEnter the 2nd num:";
    cin>>b;
    int ans;
    int i=1;
    while(i!=0)
    {
        cout<<"Enter the operator among (+,-,*,/,%) or enter e to exit:";
        cin>>op;
        switch(op)
        {
            case '+':
            {
                ans=a+b;
                cout<<"After adding ans is: "<<ans<<endl;
                break;
            }
            case '-':
            {
                ans=a-b;
                cout<<"After substracting ans is: "<<ans<<endl;
                break;
            }
            case '*':
            {
                ans=a*b;
                cout<<"After multiplication ans is: "<<ans<<endl;
                break;
            }
            case '/':
            {
                ans=a/b;
                cout<<"After division the quotient is: "<<ans<<endl;
                break;
            }
            case '%':
            {
                ans=a%b;
                cout<<"After division the remainder is: "<<ans<<endl;
                break;
            }
            case 'e':
            {
                cout<<"EXITED from the switch case"<<endl;
                i=0;
                break;
            }
            default:
            {
                cout<<"Enter a correct operator"<<endl;
                break;
            }
        }
    }
    return 0;
}