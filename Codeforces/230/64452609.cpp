#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
bool ara[1000005];
ll m=1000001;
void sieve()
{
    ll i,j;
    for(i=4; i<=m; i+=2)
    {
        ara[i]=1;
    }
    for(i=3; i<=sqrt(m); i+=2)
    {
        if(ara[i]==0)
        {
            for(j=i*i; j<=m; j+=i)
            {
                ara[j]=1;
 
            }
        }
    }
    ara[1]=1;
}
int binsearch(ll n)
{
    int low=0,high=v.size()-1,mid;
    while(low<=high)
    {
        mid=(low+high)>>1;
        if(v[mid]==n)
        {
            return 1;
        }
        if(v[mid]>n)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return 0;
}
int main()
{
    ll t,n,ara1[110005],ind=0;
    set<ll>se;
    cin>>t;
    sieve();
    for(ll i=1; i<=m; i++)
    {
        if(ara[i]==0)
            v.push_back(i*i);
 
    }
    while(t--)
    {
        cin>>n;
        if(binsearch(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}