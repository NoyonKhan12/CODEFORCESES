#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector <int> v, ans;
        int score = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'L')
                score += i;
            else
                score += (n - i - 1);

            if(s[i] == 'L' && (i < (n - 1 - i)))
                v.push_back(n-1-2*i);
            else if(s[i]=='R' && i>(n-1-i)){
                v.push_back(2*i+1-n);
                }
            }
            sort(v.rbegin(),v.rend());
            int sum = 0;
            for(int i = 0; i<v.size(); i++){
                sum+=v[i];
                ans.push_back(score+sum);
            }
            int sz = v.size();
            for(int i = sz; i<n; i++)
                ans.push_back(score + sum);

            for(int i:ans){
                cout << i << " ";
            }
        cout<<endl;
            }
    return 0;
}
