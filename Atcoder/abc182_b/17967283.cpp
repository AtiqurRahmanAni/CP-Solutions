#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
using namespace std;
int main()
{
    fastIO
    int n,i,x,maxi=0,ans=0,ans1=0;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        maxi=max(maxi,ara[i]);
    }
    for(i=2; i<=maxi; i++)
    {
        x=0;
        for(int j=0;j<n;j++)
        {
            if(ara[j]%i==0)
            {
                x++;
            }
        }
        if(x>ans)
        {
            ans=x;
            ans1=i;
        }
    }
    cout<<ans1<<endl;
    return 0;
}
