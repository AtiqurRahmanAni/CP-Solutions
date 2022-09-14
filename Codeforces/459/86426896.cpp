#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,i,mini=INT_MAX,maxi=INT_MIN;
    cin>>n;
    int ara[n];
    map<int,int>mp;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>maxi)
            maxi=ara[i];
        if(ara[i]<mini)
            mini=ara[i];
        mp[ara[i]]++;
    }
    cout<<maxi-mini<<" ";
    if(mini==maxi)
        cout<<(1LL*mp[mini]*(mp[maxi]-1))/2<<endl;
    else
        cout<<1LL*mp[mini]*mp[maxi]<<endl;
    return 0;
}