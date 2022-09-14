#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k,j;
        cin>>n>>k;
        int ara[n+5],pref[n+5];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            pref[i]=0;
        }
        for(i=1; i<n-1; i++)
        {
            if(ara[i-1]<ara[i] && ara[i]>ara[i+1])
                pref[i]=pref[i-1]+1;
            else
                pref[i]=pref[i-1];
        }
        int ans=0;
        int maxi=0,x;
        for(i=0; i<=n-k; i++)
        {
            j=i+k-1;
            x=pref[j-1]-pref[i];
            if(x>maxi)
            {
                maxi=x;
                ans=i;
            }
        }
        cout<<maxi+1<<" "<<ans+1<<endl;
    }
    return 0;
}