#include<bits/stdc++.h>
using namespace std;

void cSum()
{
    long long int n,k;
    cin>>n>>k;

    long long int a[n];
    long long int x[k]={0};
    long long int sum = 0;

    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
        x[i%k] = max(x[i%k], a[i]);
    }
    for(long long int i=0; i<k; i++)
    {
        sum = sum + x[i];
    }
    cout<<sum<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cSum();
    }
    return 0;
}
