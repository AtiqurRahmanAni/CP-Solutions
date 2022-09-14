#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ara[100005];
ll dp[100005];
int main()
{
    ll n,i,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        ara[x]++;
    }
    dp[1]=ara[1];
    for(i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+(ara[i]*i));
    }
    cout<<dp[100000]<<endl;
 
    return 0;
}