#include<bits/stdc++.h>
using namespace std;

void lo()
{
    int n;
    set<int> s;
    cin>>n;
    int a;
    for(int i=0; i<n; ++i)
    {
        cin>>a;
        s.insert(a);
    }


    cout<<s.size()<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lo();
    }
}

