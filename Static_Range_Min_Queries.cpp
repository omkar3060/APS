#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,p,r;
    cin >> n>>q;
    long long int a[n],min[n];
    long long int mini=LONG_LONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(mini>a[i])
        {
            mini=a[i];
        }
        min[i]=mini;
    }
    for(int i=0;i<q;i++)
    {
        cin>>p>>r;
        cout<<min[r-1]<<endl;
    }
}