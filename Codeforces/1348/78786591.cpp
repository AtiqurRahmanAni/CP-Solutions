#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        int ara[n+5];
        set<int>st;
        for(i=0;i<n;i++)
        {
            cin>>x;
            st.insert(x);
            ara[i]=x;
        }
        if(st.size()>k)
            cout<<-1<<endl;
        else
        {
            x=1;
            while(st.size()<k)
            {
                st.insert(x);
                x++;
            }
            cout<<n*k<<endl;
            while(n--)
            {
                for(auto j: st)
                {
                    cout<<j<<" ";
                }
            }
            puts("");
        }
    }
    return 0;
}