#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,x,i;
    ll sum=0,cur=0,maxi=-1e8,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
        maxi=max(sum,maxi);
        ans=max(ans,cur+maxi);
        cur+=sum;
    }
    cout<<ans<<endl;
    return 0;
}
