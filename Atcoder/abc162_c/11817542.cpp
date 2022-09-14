#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll sum=0;
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {
                sum+=__gcd(i,__gcd(j,k));
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
