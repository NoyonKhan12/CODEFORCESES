#include<bits/stdc++.h>
using namespace std;

void crossMark()
{
    int n,m;
    cin>>n>>m;
    if(n==1 && m==1)
    {
        cout<<0<<endl;
    }
    else if(n>m)
    {
        cout<<m+m+n-2<<endl;
    }
    else
    {
        cout<<n+n+m-2<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        crossMark();
    }
    return 0;
}
