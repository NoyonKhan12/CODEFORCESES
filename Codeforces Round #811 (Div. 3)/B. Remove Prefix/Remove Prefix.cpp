#include<bits/stdc++.h>
using namespace std;

void removePrefix()
{
    int n;
    int ans = 0;

    cin>> n;

    vector<int> a(n);
    for(auto &x : a)
    {
        cin>>x;
    }

    set<int> st;

    reverse(a.begin(), a.end());

    for(int i = 0; i < n; i++)
    {
        if(st.find(a[i])== st.end())
        {
            st.insert(a[i]);
        }

        else
        {
            break;
        }

        ans++;
    }

    cout<<n-ans<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        removePrefix();

    }

}
