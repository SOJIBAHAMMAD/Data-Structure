/*
You are given a queue of 'N' elements. Your task is to reverse the order of elements present in the queue.
You can only use the standard operations of the QUEUE STL.

1. enqueue(x): Add an item x to the rear of the queue.
2. dequeue(): Removes an item from the front of the queue.
3. size(): Returns the number of elements in the queue.
4. front(): Finds front element.
5. empty(): Checks whether the queue is empty or not.
*/

#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{   
    stack<int>st;
    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    return q;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     queue<int>pq1;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++) {
//         int val;cin>>val;
//         pq1.push(val);
//     }
//     queue<int>pq3;
//     queue<int>pq2;
//     while(1) {
//         int val;
//         while(!pq1.empty()) {
//             val=pq1.front();
//             pq1.pop();
//             if(pq1.empty()) {
//                 break;
//             }
//             pq2.push(val);
//         }
//         pq1=pq2;
//         pq3.push(val);
//         if(pq2.empty()) {
//             break;
//         }
//     }
//     while(!pq3.empty()) {
//         cout<<pq3.front()<<" ";
//         pq3.pop();
//     }
//     return 0;
// }