//2 stack implementation in an array
//This approach will provide best space 
#include <bits/stdc++.h> 
class TwoStack {

public:
    int size;
    int *arr;
    int top1;
    int top2;

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        size=s;
        arr=new int[size];
        top1=-1;
        top2=s;

    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if((top2-top1)>1)
        {
            top1++;
            arr[top1]=num;
        }
        //no need to handle the else case acc to the question
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if((top2-top1)>1)
        {
            top2--;
            arr[top2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1==-1){
            return -1;
        }
        else{
            int val=arr[top1];
            top1--;
            return val;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2==size){
            return -1;
        }
        else{
            int val=arr[top2];
            top2++;
            return val;
        }
        // Write your code here.
    }
};

int main()
{
    TwoStack ts(5);
    ts.push1(10);
    ts.push2(20);
    ts.push1(30);
    ts.push1(40);
    ts.pop1();
    
    return 0;
}
