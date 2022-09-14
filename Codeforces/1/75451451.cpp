#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int m,n,a;
    cin>>m>>n>>a;
    ll ans=ceil((double)m/a)*ceil((double)n/a);
    cout<<ans<<endl;
    return 0;
}