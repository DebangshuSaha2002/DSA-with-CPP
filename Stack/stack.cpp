//Array implementation of stack
#include<iostream>
using namespace std;

class stack{
    public:
        int top;
        int * arr;
        int size;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }


    void push(int element){
        if(top==size-1)
        {
            cout<<"Stack Overflow";
        }
        else{
            top++;
            arr[top]=element;
        }
    }

    void pop(){
        if(top==-1)
        {
            cout<<"Stack underflow";
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top>=0 && top<size) //valid range for top
            return arr[top];
        else{
            cout<<"Stack is empty";
            return -1;
        }
    }

    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return -1;
        }
    }
};

int main()
{
    stack st (5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;
    return 0;
}