#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    while (Q--)
    {
        int l = 0;
        int r = N - 1;
        int X;
        cin >> X;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (A[mid] == X)
            {
                flag = true;
                break;
            }
            else if (A[mid] < X)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}