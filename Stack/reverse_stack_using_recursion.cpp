//reverse a stack using recursion
// void insertatbottom(stack<int> &stack,int val)
// {
//     if(stack.empty())
//     {
//         stack.push(val);
//         return;
//     }
//     int num=stack.top();

//     stack.pop();
//     insertatbottom(stack, val);
//     stack.push(num);
// }
// void solve(stack<int> &stack)
// {
//     if(stack.empty()){
//         return;
//     }
//     int val=stack.top();
//     stack.pop();
//     solve(stack);
//     insertatbottom(stack,val);

// }
// void reverseStack(stack<int> &stack) {
//     // Write your code here
//     solve(stack);
// }