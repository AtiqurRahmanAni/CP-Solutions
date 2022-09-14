#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,sum=0,i,x;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        sum+=x;
    }
    if(n-sum<0)
        cout<<-1<<endl;
    else
        cout<<n-sum<<endl;
    return 0;
}
