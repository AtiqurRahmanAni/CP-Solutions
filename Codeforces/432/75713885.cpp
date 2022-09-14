#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,k,i,ans=0;
    cin>>n>>k;
    int ara[n+5];
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+i);
    for(i=2;i<n;i+=3)
    {
        if(abs(ara[i]-5)>=k)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}