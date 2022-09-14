#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll a,b,sum,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int flag=0;
        ll sumeven=(k-1)*2;
        ll sumodd=(k-1);
        if(n==k)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=k;i++)
                cout<<1<<" ";
            cout<<endl;
            continue;
        }
        if((n-sumeven)%2!=0 || n-sumeven<=0)
        {
            flag=0;
        }
        else
        {
            flag=1;
            cout<<"YES"<<endl;
            for(int i=1;i<k;i++)
            {
                cout<<2<<" ";
            }
            cout<<n-sumeven<<endl;
            continue;
        }
        if((n-sumodd)%2==0 || n-sumodd<=0)
        {
            flag=0;
        }
        else
        {
            flag=1;
            cout<<"YES"<<endl;
            for(int i=1;i<k;i++)
            {
                cout<<1<<" ";
            }
            cout<<n-sumodd<<endl;
            continue;
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}