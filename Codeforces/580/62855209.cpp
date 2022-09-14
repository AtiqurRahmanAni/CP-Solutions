#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int n,ara[100005],dp[100005],j,dpind=2,cnt=1,i;
    cin>>n;
    memset(dp,0,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    dp[1]=0;
    for(i=2;i<=n;i++)
    {
        if(ara[i]>=ara[i-1])
        {
            cnt++;
        }
        else
        {
            dp[dpind]=max(dp[dpind-1],cnt);
            dpind++;
            cnt=1;
        }
    }
    dp[dpind]=max(dp[dpind-1],cnt);
    cout<<dp[dpind]<<endl;
    return 0;
}