 #include<bits/stdc++.h>
 using namespace std;

 void minVariedNum()
 {
    int n;
    int d = 9;
    string s;

    cin >> n;
    while(n)
    {
        while(n<d)
        {
            d--;
        }

        s = s + char('0' + d);
        n = n - d;
        d--;

    }
    reverse(s.begin(), s.end());

    cout << s << endl;
 }

 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        minVariedNum();
    }
 }

