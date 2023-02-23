#include<bits/stdc++.h>
using namespace std;

void BNB()
{
    int x;
    cin>>x;
    for(int u=0; u<x; u++)
    {
        for(int g=0; g<u+1; g++)
        {
            if(g==0 || g==u)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
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
        BNB();
    }
    return 0;
}
