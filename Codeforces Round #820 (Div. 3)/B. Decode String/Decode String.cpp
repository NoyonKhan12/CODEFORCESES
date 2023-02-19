#include<bits/stdc++.h>
using namespace std;

void decodeString()
{
    int n;
    cin>>n;

    unordered_set<int> st;
    char ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]=='0' && (i==n-1 || ar[i+1]!='0'))
        {
            st.insert(i-2);
        }
    }
    string s="";
    for(int i=0;i<n;i++)
    {
        if(st.count(i)==1)
        {
            int temp = 10*(ar[i]-'0')+(ar[i+1]-'0');
            s+='a'+temp-1;
            i+=2;
        }
        else
        {
            s+='a'+(ar[i]-'0'-1);
        }
    }
    cout<<s<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        decodeString();
    }
    return 0;
}
