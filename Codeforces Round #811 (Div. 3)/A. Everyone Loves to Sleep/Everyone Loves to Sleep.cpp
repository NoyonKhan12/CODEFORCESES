#include<bits/stdc++.h>
using namespace std;


void sleepTime()
{
    int n, H, M, p;
    cin >> n >> H >> M;
    int cur1, ans;
    cur1 = H * 60 + M;
    ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        int h, m;
        cin >> h >> m;
        int cur2 = h * 60 + m, xx;
        if (cur2 < cur1)
        {
            p = (24 * 60) - (cur1 - cur2);
        }
        else
        {
            p = cur2 - cur1;
        }
        ans = min(ans, p);
    }
cout << ans / 60 << " " << ans % 60 << "\n";

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sleepTime();
    }

}
