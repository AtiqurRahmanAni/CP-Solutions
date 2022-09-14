#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,k,i;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        cin>>n>>k;
        int ara[n+5];
        int arb[n+5];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>arb[i];
        }
        sort(ara,ara+i);
        sort(arb,arb+i,greater<int>());
        int j=0;
        while(1)
        {
            if(ara[j]<arb[j])
            {
                if(k==0)
                    break;
                swap(ara[j],arb[j]);
                k--;
                j++;
                if(j>=n)
                    break;
            }
            else
            {
                j++;
                if(j>=n)
                    break;
            }
        }
        ll sum=0;
        for(i=0;i<n;i++)
        {
            sum+=ara[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}