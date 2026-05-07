
/* Description: Given an array of integers, find the equilibrium index. An equilibrium
 index is an index such that the sum of elements at lower indexes is equal to the sum 
 of elements at higher indexes.
*/

// Way 1 : Brute Force Method

// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++) {
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++) {
//         int sum1=0,sum2=0;
//         for(int j=0;j<i;j++) {
//             sum1+=v[j];
//         }                                // For this algorithm Time Complexity is O(n*n).
//         for(int k=i+1;k<n;k++) {
//             sum2+=v[k];
//         }
//         if(sum1==sum2) {
//             cout<<i<<endl;
//             break;
//         } 
//     }
//     return 0;
// }

// // Way 2 : Optimize Method

// #include<bits/stdc++.h>
// using namespace std;
// int main () {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int total_sum=0;
//     for(int i=0;i<n;i++) {
//         cin>>v[i];
//         total_sum+=v[i];
//     }
//     int left_sum=0;
//     for(int i=0;i<n;i++) {
//         int right_sum=total_sum - left_sum - v[i];    // // For this algorithm Time Complexity is O(n).
//         if(left_sum==right_sum) {
//             cout<<i<<endl;
//             break;
//         }
//         left_sum+=v[i];
//     }
//     return 0;
// }


// Way 3 : Using prefix and suffix

#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    
    // calculate prefix
    vector<int>pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++) {
        pre[i]=pre[i-1]+v[i];
    }

    // calculate suffix
    vector<int>suf(n);
    suf[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--) {
        suf[i]=suf[i+1]+v[i];
    }
    for(int i=0;i<n;i++) {
        if(pre[i]==suf[i]) {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}