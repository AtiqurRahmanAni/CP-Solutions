#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<int,int>mp;
    int n,x,i,maxi=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        mp[x]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>maxi)
            maxi=it->second;
    }
    cout<<maxi<<endl;
    return 0;
}