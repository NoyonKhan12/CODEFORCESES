#include<bits/stdc++.h>
using namespace std;

void TSP()
{
    int n;
    cin>>n;

    int x[n],y[n];
    set<pair<int,int>> st;

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        st.insert(make_pair(x[i],y[i]));
    }
    int z = 0;
    for(auto k:st)
    {
        z = z + abs(k.first)+abs(k.second);
    }
    cout<<2*z<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        TSP();
    }
}
