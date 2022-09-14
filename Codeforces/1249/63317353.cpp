#include<bits/stdc++.h>
typedef long long int ll;
#define pi 2*acos(0.0);
using namespace std;
ll ara[25];
ll n;
bool func(int a,int b)
{
    return a>b;
}
int main()
{
    ll q,ans,i,flag,sum,j,k=0;
    ara[0]=0;
    ara[1]=1;
    ara[2]=3;
    for(i=3; i<=19; i++)
    {
        ara[i]=ara[i-1]*3;
    }
    sort(ara,ara+20,func);
    cin>>q;
    while(q--)
    {
        cin>>n;
        sum=0;
        int flag21=0;
        for(i=19; i>=0; i--)
        {
            if(ara[i]==n)
            {
                flag21=1;
                ans=ara[i];
                break;
            }
            if(ara[i]>n)
            {
                ans=ara[i];
                break;
            }
        }
        int flag23=0,flag24=0,flag25=0;
        int wait,resu;
        if(flag21==0)
        {
            for(i=0; i<=19; i++)
            {
                if(sum==n)
                {
                    flag24=1;
                    ans=sum;
                    break;
                }
                else if(n-sum>=ara[i] || flag23==1)
                {
                    flag23=1;
                    if(n-sum>=ara[i])
                        sum+=ara[i];
                    else
                    {
                        flag25=1;
                        resu=sum;
                        wait=ara[i];
                    }
                }
            }
        }
        if(flag24==1 || flag21==1 || flag25==0)
            cout<<ans<<endl;
        else
        {
            cout<<resu+wait<<endl;
        }
        //cout<<sum<<endl;
 
    }
    return 0;
}