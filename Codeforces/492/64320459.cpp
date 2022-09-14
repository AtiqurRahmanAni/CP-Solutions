#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    double ans;
    int ara[1005],n,i,l,x,flag=0;
    cin>>n>>l;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+i);
    x=0;
    for(i=1; i<n; i++)
    {
        x=max(x,ara[i]-ara[i-1]);
    }
    ans=x/2.0;
    if(ara[0]!=0)
    {
        if(ara[0]>ans)
        {
            flag=1;
            ans=ara[0];
        }
 
    }
    if(ara[n-1]!=l)
    {
        if(l-ara[n-1]>ans)
        {
            flag=1;
            ans=l-ara[n-1];
        }
    }
    printf("%f\n",ans);
 
    return 0;
}