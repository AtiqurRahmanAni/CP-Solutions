#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector<pair<int,int>>v1;
    int s,n,flag=0,i,a,b;
    ll str;
    cin>>s>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        v1.push_back(make_pair(a,b));
    }
    sort(v1.begin(),v1.end());
    str=s;
    for(i=0;i<n;i++)
    {
        if(v1[i].first<s)
        {
            s+=v1[i].second;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}