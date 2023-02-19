#include<bits/stdc++.h>
using namespace std;

void jumpTile()
{
    string s;
    int x = 0;
    map<char,vector<int>> mp;
    cin>>s;
    for(int i=1; i<s.size()-1; i++)
    {
        mp[s[i]].push_back(i+1);
    }

    if(s[0] < s[s.size()-1])
    {
      for(char i = s[0]; i <= s[s.size()-1]; i++)
      {
          x = x + mp[i].size();
      }

      cout<<s[s.size()-1]-s[0]<<' '<<x+2<<endl;
      cout << 1 << ' ';
      for(char i=s[0];i<=s[s.size()-1];++i)
      {
          for(int a:mp[i])
          {
            cout<<a<<' ';
          }
      }
      cout<< s.size() << endl;
   }
   else
    {
      for(char i = s[0]; i >= s[s.size()-1]; i++)
      {
          x = x + mp[i].size();
      }
      cout<<s[0] - s[s.size()-1]<<' '<< x+2 <<endl;
      cout<<1<<' ';

      for(char i=s[0];i>=s[s.size()-1];--i)
      {
          for(int j:mp[i])
          {
              cout << j << ' ';
          }
      }
      cout << s.size() << endl;
    }
}

signed int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        jumpTile();
    }
    return 0;
}
