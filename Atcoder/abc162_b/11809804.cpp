#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%3!=0 && i%5!=0)
        {
            //cout<<i<<" ";
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
