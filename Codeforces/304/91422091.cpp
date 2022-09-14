#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 10e9+7
typedef long long ll;
using namespace std;
int main()
{
    int n;
    ll i,j,ans=0,temp;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            temp=i*i+j*j;
            if(temp<=n*n && (floor(sqrt(temp))==ceil(sqrt(temp))))
            {
                //cout<<i<<" "<<j<<endl;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}