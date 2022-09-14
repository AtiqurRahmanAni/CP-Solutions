#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,ans=0;
    cin>>n;
    ll ara[n+5],ara1[n+5];
    vector<pair<int,int>>vec;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        ara1[i]=ara[i];
    }
    sort(ara1,ara1+n);
    for(i=0;i<n;i++)
    {
        if(ara1[i]!=ara[i])
        {
            for(j=i; ;j++)
            {
                if(ara[j]==ara1[i])
                {
                    swap(ara[i],ara[j]);
                    vec.push_back(make_pair(i,j));
                    ans++;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    for(i=0;i<(int)vec.size();i++)
        cout<<vec[i].first<<' '<<vec[i].second<<' '<<endl;
    return 0;
}