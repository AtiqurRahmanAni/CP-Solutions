#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,i,ans=0;
    cin>>n;
    int ara[n];
    map<int,vector<int>>mp;
    vector<int>vec;
    vector<pair<int,int>>ans1;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]].push_back(i+1);
    }
    //cout<<mp.size()<<endl;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        vec=it->second;
        int sz=vec.size();
        if(sz==1)
        {
            ans1.push_back({it->first,0});
        }
        else
        {
            int diff=vec[1]-vec[0];
            int flag=0;
            for(int j=2;j<sz;j++)
            {
                if(vec[j]-vec[j-1]!=diff)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                ans1.push_back({it->first,diff});
            }
        }
    }
    int sz=ans1.size();
    cout<<sz<<endl;
    for(i=0;i<sz;i++)
    {
        cout<<ans1[i].first<<" "<<ans1[i].second<<endl;
    }
    return 0;
}