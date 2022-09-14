#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll n,m;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        cin>>n>>m;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<m<<endl;
            continue;
        }
        cout<<m*2<<endl;
    }
    return 0;
}