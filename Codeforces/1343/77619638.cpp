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
        int x=n/2;
        if(x%2!=0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int even=2,odd=1,sume=0,sumo=0;
            for(i=1;i<=x;i++)
            {
                cout<<even<<" ";
                sume+=even;
                even+=2;
            }
            for(;i<=n-1;i++)
            {
                cout<<odd<<" ";
                sumo+=odd;
                odd+=2;
            }
            cout<<sume-sumo<<endl;
        }
    }
    return 0;
}
 