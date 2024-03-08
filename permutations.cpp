#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, n;
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n <= 3)
        cout << "NO SOLUTION" << endl;
    else if (n == 4)
        cout << "2 4 1 3" << endl;
    else
    {
        long long int arr[n] = {0};
        int k = 0;
        for (int i = 0; i < n; i = i + 2)
            arr[k++] = i + 1;
        for (int i = 1; i < n; i = i + 2)
            arr[k++] = i + 1;
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
}