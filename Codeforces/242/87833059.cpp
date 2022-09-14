#include<bits/stdc++.h>
using namespace std;
bool ara[1299710];
void prime(int n)
{
    int i,j;
    for(i=2; i*i<=1299710; i++)
    {
        if(ara[i]==false)
        {
            for(j=i*i; j<=1299710; j+=i)
            {
                ara[j]=true;
            }
        }
    }
    ara[0]=ara[1]=true;
    int cnt=0;
    for(i=2; ; i++)
    {
        if(ara[i]==false)
        {
            cnt++;
            cout<<i<<" ";
        }
        if(cnt==n)
            break;
    }
}
int main()
{
 
    int n,i,flag=0,a,b,ans,flag1=0,mini,maxi,c,d,mini1=INT_MAX,maxi1=INT_MIN;
    vector<pair<int,int>>vec;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        vec.push_back({a,b});
        mini1=min(a,mini1);
        maxi1=max(b,maxi1);
    }
    for(i=0; i<n; i++)
    {
        if(vec[i].first<=mini1 && vec[i].second>=maxi1)
        {
            ans=i+1;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans<<endl;
    return 0;
}