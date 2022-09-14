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
        int mini1=INT_MAX,mini2=INT_MAX;
        int ara[n],arb[n];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mini1=min(ara[i],mini1);
        }
        for(i=0;i<n;i++)
        {
            cin>>arb[i];
            mini2=min(arb[i],mini2);
        }
        long long ans=0;
        for(i=0;i<n;i++)
        {
            int x=ara[i]-mini1;
            int y=arb[i]-mini2;
            if(x==y)
            {
                ans+=x;
            }
            else
            {
                if(x<y)
                    swap(x,y);
                ans+=y;
                ans+=abs(x-y);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}