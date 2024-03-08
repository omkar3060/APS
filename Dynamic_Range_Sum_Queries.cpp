#include <bits/stdc++.h>
using namespace std;
void calculate_sum(long long int a[],int n,long long int sum[])
{
    for (int i = 0; i < n; i++)
    {
        if(i>0)
        sum[i]=sum[i-1]+a[i];
        else
        sum[i]=a[i];
    }
}
int main()
{
    int n,q,p,r,qtype;
    cin >> n>>q;
    long long int a[n],sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    calculate_sum(a,n,sum);
    for(int i=0;i<q;i++)
    {
        cin>>qtype>>p>>r;
        if(qtype==1)
        {
            a[p-1]=r;
            calculate_sum(a,n,sum);
        }
        else
        {if(p>=2)
        cout<<sum[r-1]-sum[p-2]<<endl;
        else
        cout<<sum[r-1]<<endl;}
    }
}