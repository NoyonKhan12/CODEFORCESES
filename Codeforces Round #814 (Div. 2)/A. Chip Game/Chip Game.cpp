#include<bits/stdc++.h>
using namespace std;


void chip()
{
    long long int n,m;
    cin>>n>>m;

    if((n+m)%2==0)
    {
        cout<<"Tonya"<<endl;
    }
    else
    {
        cout<<"Burenka"<<endl;
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        chip();
    }
}
