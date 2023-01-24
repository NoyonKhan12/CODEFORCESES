#include<bits/stdc++.h>
using namespace std;

void sum()
{
    int n;
    cin>>n;
    vector<long long> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    long long y = v[n-1]-v[0];
    long long z = v[n-2]-v[1];

    cout<<y+z<<endl;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sum();
    }
}
