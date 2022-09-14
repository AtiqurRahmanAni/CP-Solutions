#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll ara[5];
    cin>>ara[0]>>ara[1]>>ara[2]>>ara[3];
    sort(ara,ara+4);
    ll c=ara[3]-ara[0];
    ll b=ara[1]-c;
    ll a=ara[0]-b;
    cout<<a<<' '<<b<<' '<<c<<endl;
    return 0;
}