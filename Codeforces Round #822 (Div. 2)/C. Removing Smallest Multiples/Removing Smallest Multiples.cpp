#include<bits/stdc++.h>
using namespace std;

void RSM()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='0')
        {
            v.push_back(i+1);
        }
    }

    int z = v.size();

    if(z == 0)
    {
        cout<<0<<endl;
        return;
    }

    bool a[n+1] = {0};
    int w = 0;
    for(int i=0; i<z; i++)
    {
        int d = 1;
        while(binary_search(v.begin(), v.end(), d*v[i]));
        if(!a[d*v[i]])
        {
            w = w + v[i];
        }
        a[d*v[i]] = true;
        d++;
    }
    cout<<w<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        RSM();
    }
    return 0;
}
