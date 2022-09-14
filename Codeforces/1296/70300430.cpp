#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int i,n,a,b,k,x;
    cin>>n>>a>>b>>k;
    int ara[n+5];
    x=a+b;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%x==0)
            ara[i]=x;
        else
            ara[i]%=x;
    }
    sort(ara,ara+n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]<=a)
            ans++;
        else
        {
            ara[i]-=a;
            if(k>0)
            {
                x=ara[i]/a;
                if(ara[i]%a!=0)
                    x+=1;
                if(x<=k)
                {
                    k-=x;
                    ans++;
                }
 
            }
            else
                continue;
        }
    }
    cout<<ans<<endl;
    return 0;
}