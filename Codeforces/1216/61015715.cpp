#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i;
    ll ara[200005],maximum=0,totalstolen=0,person=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        maximum=max(maximum,ara[i]);
    }
    for(i=0;i<n;i++)
    {
        totalstolen+=(maximum-ara[i]);
        person=__gcd(maximum-ara[i],person);
    }
    printf("%lld %lld\n",totalstolen/person,person);
    return 0;
}