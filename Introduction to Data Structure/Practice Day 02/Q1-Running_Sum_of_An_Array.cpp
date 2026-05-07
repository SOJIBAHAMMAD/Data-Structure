/*
Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]).
Write a C++ program to compute the running sum of the given array and print the result.
Note: Solve this problem using function and Vector. 

Input
The first line contains an integer n representing the size of the array.
The second line contains n integers representing the elements of the array nums.
*/

#include<bits/stdc++.h>
using namespace std;
vector<int>running_sum(vector<int>&v,int n) {
    vector<int>prefix_sum(n);
    prefix_sum[0]=v[0];
    for(int i=1;i<n;i++) {
        prefix_sum[i]=prefix_sum[i-1]+v[i];
    }
    return prefix_sum;
}
int main () {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    vector<int>result = running_sum(v,n);
    for(int i=0;i<n;i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}
