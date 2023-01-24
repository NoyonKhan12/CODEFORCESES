#include<bits/stdc++.h>
using namespace std;

void frac()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long int x1 = a*d;
    long long int x2 = b*c;

    if(x1==x2)
    {
        cout<<0<<endl;
    }
    else
    {
        if(x1!=0 && x2%x1==0)
        {
            cout<<1<<endl;
        }
        else if(x2!=0 && x1%x2==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }



}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        frac();
    }
}
