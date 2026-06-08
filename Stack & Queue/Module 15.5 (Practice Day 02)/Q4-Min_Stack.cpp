/*
Contributed by
102 upvotes
Asked in companies
Problem statement
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

1. Push(num): Push the given number in the stack.
2. Pop: Remove and return the top element from the stack if present, else return -1.
3. Top: return the top element of the stack if present, else return -1.
4. getMin: Returns minimum element of the stack if present, else return -1.
For Example:

For the following input: 
1
5
1 1
1 2
4
2
3
For the first two operations, we will just insert 1 and then 2 into the stack which was empty earlier. So now the stack is => [2,1]
In the third operation, we need to return the minimum element of the stack, i.e., 1. So now the stack is => [2,1]
For the fourth operation, we need to pop the topmost element of the stack, i.e., 2. Now the stack is => [1]
In the fifth operation, we return the top element of the stack, i.e. 1 as it has one element. Now the stack is => [1]

So, the final output will be: 
1 2 1
*/


#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		stack<int>st;
		stack<int>min_st;
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{ 
			st.push(num);  
			if(min_st.empty()) {
			    min_st.push(num);
		    } else { 
			    if(min_st.top() >= st.top()) {
				    min_st.push(num);
			    }
			}
		
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(st.empty()) return -1;
			int val=st.top();
			st.pop();
			if(min_st.top()==val) {
				min_st.pop();
			}
			return val;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(st.empty()) return -1;
			return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(min_st.empty()) return -1;
			return min_st.top();
		}
};
