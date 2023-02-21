#include<bits/stdc++.h>
using namespace std;

void rol()
{
    long long n,x,y;
    cin>>n>>x>>y;

    string str1, str2;
    cin>>str1>>str2;
    vector<long long> vec;

    for(long long i =0; i<n; i++)
    {
        if(str1[i] != str2[i])
        {
            vec.push_back(i);
        }
    }
    if(vec.size()%2 == 1)
    {
        cout<<-1<<endl;
        return;
    }
    if(vec.size()==2)
    {
        if(vec[0]+1 == vec[1])
        {
            if(n==2 || n==3)
            {
                cout<<x<<endl;
            }
            else if(n==4)
            {
                if(vec[0]==1)
                {
                    cout<<x<<endl;
                }
                else
                {
                    cout<<min(2*y, x)<<endl;
                }
            }
            else
            {
                cout<<min(2*y, x)<<endl;
            }
        }
        else
        {
            cout<<y<<endl;
        }
        return;
    }
    cout<<(vec.size()/2) * y<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        rol();
    }
}
