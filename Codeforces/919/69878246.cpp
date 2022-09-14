#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isperfect(ll n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum==10)
        return true;
    else
        return false;
}
int main()
{
    int n,cnt=0;
    ll i;
    cin>>n;
    for(i=19; ;i++)
    {
        if(isperfect(i))
        {
            cnt++;
            if(cnt==n)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}