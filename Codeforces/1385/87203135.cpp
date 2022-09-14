#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,test,i,n,x,y,z,a,b,c,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n*2];
        set<int>st;
        for(i=0; i<n*2; i++)
        {
            cin>>ara[i];
        }
        for(i=0;i<n*2;i++)
        {
            if(!st.count(ara[i]))
            {
                cout<<ara[i]<<" ";
                st.insert(ara[i]);
            }
        }
        puts("");
    }
    return 0;
}