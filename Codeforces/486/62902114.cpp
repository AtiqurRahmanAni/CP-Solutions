#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,ans;
    cin>>n;
    if(n%2==0)
        cout<<n/2<<endl;
    else
    {
        ans=(n/2)+1;
        cout<<ans*-1<<endl;
    }
    return 0;
 
}