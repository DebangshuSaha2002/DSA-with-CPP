//Sorting a stack using recursion

// #include <bits/stdc++.h> 
// void sortedinsert(stack<int> &stack,int num)
// {
// 	if(stack.empty() || (!stack.empty() && stack.top()<=num))
// 	{
// 		stack.push(num);
// 		return;
// 	}
// 	int val=stack.top();
// 	stack.pop();

// 	sortedinsert(stack,num);

// 	stack.push(val);
// }

// void sortStack(stack<int> &stack)
// {
// 	// Write your code here
// 	if(stack.empty())
// 	{
// 		return;
// 	}
// 	int val=stack.top();
// 	stack.pop();

// 	sortStack(stack);
// 	sortedinsert(stack,val);

// }