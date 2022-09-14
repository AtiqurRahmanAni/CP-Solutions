#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int k,i,cnt=0,cnt1=0,ara[12],sum=0,sum1=0;
    cin>>k;
    for(i=0;i<12;i++)
    {
        cin>>ara[i];
        sum1+=ara[i];
    }
    if(k==0)
    {
        cout<<0<<endl;
        return 0;
    }
    if(sum1<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(ara,ara+i);
    for(i=0;i<12;i++)
    {
        sum+=ara[i];
        cnt++;
        if(sum>=k)
            break;
    }
    sum=0;
    for(i=11;i>=0;i--)
    {
        sum+=ara[i];
        cnt1++;
        if(sum>=k)
            break;
    }
    cout<<min(cnt,cnt1)<<endl;
    return 0;
}