#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 1000006
int main()
{
    long double b;
    ll ans,a,c;
    cin>>a>>b;
    c=(ll)round(b*100);
    //printf("%0.3llf\n",temp);
    ans=a*c/100;
    cout<<ans<<endl;
    return 0;
}
