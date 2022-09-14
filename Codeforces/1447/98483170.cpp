#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int t,n,i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int sum=0,odd=0;
        int mini=INT_MAX;
        int ara[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ara[i][j];
                sum+=abs(ara[i][j]);
                mini=min(abs(ara[i][j]),mini);
                if(ara[i][j]<0)
                    odd++;
            }
        }
        if(odd%2==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<sum-2*mini<<endl;
        }
    }
    return 0;
}