#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    map<pair<int,int>,int>mp;
    for(i=0;i<n-1;i++)
    {
        mp[{i,i+1}]=abs(ara[i]-ara[i+1]);
    }
    mp[{0,n-1}]=abs(ara[0]-ara[n-1]);
    int mini=INT_MAX;
    int a,b;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second<mini)
        {
            mini=it->second;
            a=it->first.first;
            b=it->first.second;
        }
    }
    cout<<a+1<<" "<<b+1<<endl;
    return 0;
}