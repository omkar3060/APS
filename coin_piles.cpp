#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, n;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << "YES" << endl;
        else if (a == 0 || b == 0 || a > 2 * b || b > 2 * a)
            cout << "NO" << endl;
        else if ((a + b) % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}