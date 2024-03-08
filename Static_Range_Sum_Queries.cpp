#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, p, r;
    cin >> n >> q;
    long long int a[n], sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            sum[i] = sum[i - 1] + a[i];
        else
            sum[i] = a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> p >> r;
        if (p >= 2)
            cout << sum[r - 1] - sum[p - 2] << endl;
        else
            cout << sum[r - 1] << endl;
    }
}