#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 10e9+7
using namespace std;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n];
        for(i=0; i<n; i++)
            cin>>ara[i];
        sort(ara,ara+i);
        for(i=1; i<n; i++)
        {
            if(ara[i]-ara[i-1]<=1)
            {
                ara[i-1]=-1;
            }
        }
        set<int>st;
        for(i=0; i<n; i++)
        {
            if(ara[i]==-1)
                continue;
            st.insert(ara[i]);
        }
        if(st.size()==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}