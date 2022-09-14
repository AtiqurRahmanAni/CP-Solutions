#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        set<int>st;
        int maxi=0;
        int ara[205];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            st.insert(ara[i]);
        }
        int cnt=0;
        for(i=1; ;i++)
        {
            if(x==0)
                break;
            if(!st.count(i))
            {
                st.insert(i);
                x--;
            }
        }
        for(i=1; ;i++)
        {
            if(st.count(i))
                cnt++;
            else
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}