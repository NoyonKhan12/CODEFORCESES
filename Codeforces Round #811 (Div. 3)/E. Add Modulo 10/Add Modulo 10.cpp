#include<bits/stdc++.h>
using namespace std;

void modulo()
{
    int n;
    cin>>n;
    vector<int> v,l;
    int x;
    for(int i=0; i<n; i++)
    {

        cin>>x;
        v.push_back(x);

    }

    int m = *max_element(v.begin(), v.end());

    for(auto i:v)
    {
        if(i==m)
        {
            l.push_back(1);
        }
        if(i<m)
        {

        }
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        modulo();
    }
}
