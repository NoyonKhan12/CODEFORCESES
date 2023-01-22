#include<bits/stdc++.h>
using namespace std;

void rebellion()
{
    int n;
    cin>>n;

    vector<int> vect(n);

    for(int i=0; i<n; i++)
    {
        cin>>vect[i];
    }

    int answer = 0;
    int first = 0;
    int last = n-1;

    while(first < last)
    {
        if(vect[last]==1)
        {
            last--;
        }
        else if(vect[first]==1 && vect[last]==1)
        {
            first++;
            last--;
        }
        else if(vect[first]==1 && vect[last]==0)
        {
            answer++;
            first++;
            last--;
        }
        else if(vect[first]==0 && vect[last]==1)
        {
            first++;
        }
        else
        {
            first++;
        }
    }
    cout<<answer<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        rebellion();
    }
    return 0;
}
