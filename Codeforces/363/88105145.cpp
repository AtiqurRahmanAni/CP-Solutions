#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=INT_MAX,cnt=0,k,f=0,ans;
    cin>>n>>k;
    int ara[n+1];
    int cum[n+1];
    cum[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        cum[i]=ara[i]+cum[i-1];
 
    }
    cnt=0;
    int sum1=0;
    for(i=k;i<=n;i++)
    {
        //cout<<cum[i]<<" "
        //cout<<cum[i]<<" "<<cum[i-k]<<endl;
        if(cum[i]-cum[i-k]<sum)
        {
            sum=cum[i]-cum[i-k];
            ans=i-k+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}