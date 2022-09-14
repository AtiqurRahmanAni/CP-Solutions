#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll ara[100005],i,m,n;
    ll res=0;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>ara[i];
    }
    res+=ara[0]-1;
    for(i=1; i<m; i++)
    {
 
        if(ara[i-1]>ara[i])
        {
            res+=n-ara[i-1]+ara[i];
        }
        else
            res+=ara[i]-ara[i-1];
    }
    cout<<res<<endl;
    return 0;
}