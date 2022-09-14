#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sz,flag,x;
    cin>>n;
    map<int,int>mp;
    for(i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }
    int vec[33333][3];
    if(mp.size()<3)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=0;i<n/3;i++)
    {
        flag=sz=0;
        for(auto [key,value]: mp)
        {
            if(sz==3)
                break;
            if(value>0 && sz==0)
            {
                vec[i][sz++]=key;
                mp[key]--;
            }
            else if(value!=0 && sz!=0 && key%vec[i][sz-1]==0)
            {
                vec[i][sz++]=key;
                mp[key]--;
            }
        }
        if(sz<3)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=0; i<n/3; i++)
    {
        cout<<vec[i][0]<<" "<<vec[i][1]<<" "<<vec[i][2]<<endl;
    }
    return 0;
}