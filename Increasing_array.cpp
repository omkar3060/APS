#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] < a[i])
        {
            cnt = cnt - a[i + 1] + a[i];
            a[i + 1] = a[i];
        }
    }
    cout << cnt << endl;
}