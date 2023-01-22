#include<bits/stdc++.h>
using namespace std;

void maxmina()
{
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    int z = 0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==1)
        {
            z++;
        }
    }
    if(z)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        maxmina();
    }
    return 0;
}
