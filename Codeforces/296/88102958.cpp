#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,maxi=0;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
        if(mp[x]>maxi)
            maxi=mp[x];
    }
    int sum=0;
    for(auto [key,value]:mp)
    {
        sum+=value;
    }
    sum-=maxi;
    if(sum==maxi-1 || sum>=maxi)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}