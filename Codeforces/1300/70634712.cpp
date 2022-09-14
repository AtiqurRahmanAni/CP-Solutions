#include<bits/stdc++.h>
#include<time.h>
typedef long long ll;
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n+5];
        ll sum=0,sumpos=0,sumneg=0;
        int cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==0)
                cnt++;
            else if(ara[i]<0)
                sumneg+=ara[i];
            else if(ara[i]>0)
                sumpos+=ara[i];
 
        }
        sumpos+=cnt;
        sumneg*=-1;
        if(sumneg==sumpos)
            cout<<cnt+1<<endl;
        else
            cout<<cnt<<endl;
 
    }
    return 0;
}