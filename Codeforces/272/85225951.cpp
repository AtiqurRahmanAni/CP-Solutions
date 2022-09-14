#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,sum=0,i,x,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum+=x;
    }
    for(i=1;i<=5;i++)
    {
        if(((sum+i)%(n+1))!=1)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}