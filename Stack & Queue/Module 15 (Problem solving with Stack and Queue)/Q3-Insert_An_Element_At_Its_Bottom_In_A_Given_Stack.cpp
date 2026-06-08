/*
You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. Your task is to 
insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.
Note :
If ‘MY_STACK’ = [7, 1, 4, 5], then the first element represents the element at the bottom 
of the stack and the last element represents the element at the top of the stack.
For Example :
Let ‘MY_STACK’ = [7, 1, 4, 5] and ‘X’ = 9. So, ‘MY_STACK’ after insertion becomes [9, 7, 1, 4, 5].
*/


// way 1
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   queue<int>qu;
   while(!myStack.empty()) {
       qu.push(myStack.top());
       myStack.pop();
   }
   qu.push(x);

   stack<int>st;
   while(!qu.empty()) {
       st.push(qu.front());
       qu.pop();
   }
   while(!st.empty()) {
       myStack.push(st.top());
       st.pop();
   }
   return myStack;
}


// way 2 (Easy way)

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
   stack<int>new_stack;
   while(!myStack.empty()) {
       new_stack.push(myStack.top());
       myStack.pop();
   }

   myStack.push(x);
   while(!new_stack.empty()) {
       myStack.push(new_stack.top());
       new_stack.pop();
   }
   return myStack;
}
