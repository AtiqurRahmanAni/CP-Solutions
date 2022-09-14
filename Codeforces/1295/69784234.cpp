#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n;
    //ara[10]={6,2,5,5,4,5,6,3,7,7,6};
    char ans[15];
    ll ans1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            for(int i=1;i<=n/2;i++)
                cout<<1;
        }
        else
        {
            cout<<7;
            for(int i=1;i<n/2;i++)
                cout<<1;
        }
        puts("");
    }
    return 0;
}