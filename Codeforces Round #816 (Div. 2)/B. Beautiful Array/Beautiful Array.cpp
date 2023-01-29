#include<bits/stdc++.h>
using namespace std;

void beatifulArray()
{
    long long int n,k,b,s;
    cin>>n>>k>>b>>s;

    if(s < k*b || s>(n *(k-1) + k*b) )
    {
        cout<<-1<<endl;
    }
    else
    {
        vector<long long> v(n,0);
        v[0] = k*b;
        s = s - k*b;
        for(int i=0; i<n && s>0; i++)
        {
            v[i] = v[i] + min(k-1,s);
            s = s - min(k-1,s);
        }
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        beatifulArray();
    }
    return 0;
}
