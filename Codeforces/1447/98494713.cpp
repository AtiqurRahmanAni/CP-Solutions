#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
vector<pair<int,int>>v;
int maxSum(int n, ll mini,ll maxi,int &l,int &r)
{
    int i,j;
    ll sum=0;
    j=0;
    for(i=0; i<n; i++)
    {
        sum+=(ll)v[i].first;
        if(sum>=mini && sum<=maxi)
        {
 
            l=0;
            r=i;
            return 1;
        }
        if(sum>maxi)
        {
            while(sum>maxi && j<=i)
            {
 
                sum-=v[j].first;
                j++;
            }
            if(sum>=mini && sum<=maxi)
            {
                l=j;
                r=i;
                return 1;
            }
        }
    }
    return -1;
}
int main()
{
    fastIO
    int t,n,i,j,m,y;
    cin>>t;
    while(t--)
    {
        int n,l,r;
        ll w;
        cin>>n>>w;
        for(i=0;i<n;i++)
        {
            cin>>y;
            v.push_back({y,i+1});
        }
        sort(v.begin(),v.end());
        ll half=ceil(w/2.0);
        int x=maxSum(n,half,w,l,r);
        //cout<<l<<" "<<r<<endl;
        if(x==1)
        {
            //cout<<"-------\n";
            //cout<<l<<" "<<r<<endl;
            cout<<r-l+1<<endl;
            for(i=l;i<=r;i++)
            {
                //cout<<"Y"<<endl;
 
                cout<<v[i].second<<" ";
            }
            cout<<endl;
        }
        else
        {
            //cout<<"-------\n";
            cout<<-1<<endl;
        }
        v.clear();
    }
    return 0;
}