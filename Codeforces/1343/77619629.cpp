#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    ll n,sum,i;
    while(t--)
    {
        cin>>n;
        sum=3;
        i=2;
        while(true)
        {
            if(n%sum==0)
                break;
            sum+=(1<<i);
            i++;
        }
        cout<<n/sum<<endl;
    }
    return 0;
}