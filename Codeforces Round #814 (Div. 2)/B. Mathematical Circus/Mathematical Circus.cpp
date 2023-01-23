#include<bits/stdc++.h>
using namespace std;


void circus()
{
    long long int n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i=1; i<=n; i++)
    {
        a[i] = i;
        b[i] = i;
    }

    int x = 0;
    unordered_set<int> v;

    for(int i=1; i<=n; i++)
    {
        for(int j = 1;j<=n; j++)
        {
            if((a[i]!=b[j]) && ((a[i]+k)*b[j])%4==0)
            {


                x = 1;
                v.insert(a[i]);
                v.insert(b[j]);





            }
        }



    }
    int y=0;
    if(x==1)
    {
        cout<<"YES"<<endl;
        for(auto i:v)
        {
            cout<<i;
            y++;
            if(y==1)
            {
                cout<<" ";
            }
            if(y==2)
            {
                cout<<endl;
                y = 0;
            }

        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    v.clear();



}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        circus();
    }
}

