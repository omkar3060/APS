#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int maxi = 01, cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size();)
    {
        char ch = s[i];
        int j = i + 1;
        cnt = 1;

        while (s[j] == ch)
        {
            cnt++;
            j++;
        }
        maxi = max(cnt, maxi);
        i = j;
    }
    cout << maxi;
}