#include<bits/stdc++.h>
using namespace std;

void permOp()
{
    int numb;
    cin>>numb;

    vector<int> vect(numb);

    for(int i=0; i<numb; i++)
    {
        cin>>vect[i];
    }

    set<int> st;
    for(int i=numb-1; i>0; i--)
    {
        st.insert(i);
    }

    vector<int> answer(numb+1, numb);

    for(int in=0; in<numb-1; in++)
    {
        if(vect[in] > vect[in+1])
        {
            answer[*st.lower_bound(vect[in]-vect[in+1])] = in+2;
            st.erase(*st.lower_bound(vect[in]-vect[in+1]));
        }
    }
    for(int in=0; in<numb; in++)
    {
        cout<<answer[in+1]<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        permOp();
    }
    return 0;
}
