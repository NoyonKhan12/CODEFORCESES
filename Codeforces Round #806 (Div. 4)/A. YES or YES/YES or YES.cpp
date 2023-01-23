#include<bits/stdc++.h>
using namespace std;

void l()
{
    string s;
    string s1="YES", s2="NO";
    cin>>s;
    std:: transform(s.begin(), s.end(),s.begin(), ::toupper);
    int k= s.compare(s1);
    if(k==0)
    {
        cout<<s1<<endl;
    }
    else
    {
        cout<<s2<<endl;
    }


}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        l();
    }
}
