#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<pair<int,int>>p;
    int mini,maxi;
    int n,i;
    cin>>n;
    int ara[n+5];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        //cout<<"hi"<<endl;
        mini=min(ara[i],ara[i+1]);
        maxi=max(ara[i],ara[i+1]);
        for(int j=0;j<p.size();j++)
        {
            if(mini>p[j].first && mini<p[j].second && maxi>p[j].second)
            {
                flag=1;
                break;
            }
            else if(mini<p[j].first && maxi>p[j].first && maxi<p[j].second)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            break;
        p.push_back(make_pair(mini,maxi));
    }
    if(flag==1)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}