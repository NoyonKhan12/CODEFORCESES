#include<bits/stdc++.h>
using namespace std;

void spellCheck()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    sort(str.begin(), str.end());
    if("Timru" == str)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        spellCheck();
    }
    return 0;
}
