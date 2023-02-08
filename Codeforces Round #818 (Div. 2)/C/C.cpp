#include<bits/stdc++.h>
using namespace std;

void madokaC()
{
    long long int n;
    cin>>n;
    long long int a[n],b[n];

    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(long long int i=0; i<n; i++)
    {
        cin>>b[i];
    }


    for(long long int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            cout<<"NO"<<endl;
            return;
        }
        if( (b[i] > a[i]) && (b[i] > (b[(i+1)%n]+1)) )
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;



}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        madokaC();
    }
    return 0;
}
