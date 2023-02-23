#include<bits/stdc++.h>
using namespace std;

void sticks()
{
    int n;
    cin>>n;

    long long int m = INT_MAX;
    vector<long long int> v;

    for(int i=0; i<n; i++)
    {
        long long int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(int i=0; i<n-2; i++)
    {
        long long int p = abs(v[i]-v[i+1]);
        p = p + abs(v[i+1] - v[i+2]);
        m = min(m, p);
    }
    cout<<m<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sticks();
    }
    return 0;
}
