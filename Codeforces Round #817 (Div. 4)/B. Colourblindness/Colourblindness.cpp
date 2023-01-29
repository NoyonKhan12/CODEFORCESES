#include<bits/stdc++.h>
using namespace std;

void colorBlind()
{
    int n;
    cin>>n;

    string s1, s2;
    cin>>s1>>s2;

    for(int i=0; i<n; i++)
    {
        if( (s1[i]=='R' && s2[i]!='R')  ||  (s1[i]!='R' && s2[i]=='R') )
        {
            cout<<"No"<<endl;
            return;
        }

    }
    cout<<"Yes"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        colorBlind();
    }
    return 0;
}
