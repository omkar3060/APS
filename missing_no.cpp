#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];
    int h[200000] = {0}, num = -1;
    for (int i = 0; i < n - 1; i++)
        h[a[i] - 1]++;
    for (int i = 0; i < 200000; i++)
    {
        if (h[i] == 0)
        {
            num = i + 1;
            break;
        }
    }
    if (num == -1)
        cout << 200001 << endl;
    else
        cout << num << endl;
}