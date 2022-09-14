#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,ans=0;
    map<int,int>mp;
    cin>>n;
    int ara[n+1];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
    }
    bool possible=false;
    if(mp[1]!=0 && mp[2]!=0 && mp[3]!=0)
    {
        possible=true;
    }
    if(!possible)
        cout<<0<<endl;
    else
    {
        //sort(ara,ara+i);
        ans=min(mp[1],min(mp[2],mp[3]));
        cout<<ans<<endl;
        while(ans--)
        {
            for(i=0; i<n; i++)
            {
                if(ara[i]==1)
                {
                    cout<<i+1<<" ";
                    ara[i]=-1;
                    break;
                }
            }
            for(i=0; i<n; i++)
            {
                if(ara[i]==2)
                {
                    cout<<i+1<<" ";
                    ara[i]=-1;
                    break;
                }
            }
            for(i=0; i<n; i++)
            {
                if(ara[i]==3)
                {
                    cout<<i+1<<" ";
                    ara[i]=-1;
                    break;
                }
            }
            puts("");
        }
    }
    return 0;
}