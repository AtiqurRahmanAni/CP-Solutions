#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,m,l,r,ans=0,ansl=INT_MAX,ansr=0,flag=0,i;
        vector<pair<int,int>>vec;
        cin>>n>>x>>m;
        while(m--)
        {
            cin>>l>>r;
            if(x>=l && x<=r && flag==0)
            {
                ansl=l;
                ansr=r;
                flag=1;
                vec.push_back({l,r});
            }
            else if(flag==1)
            {
                int sz=vec.size();
                for(i=0; i<sz; i++)
                {
                    //cout<<vec[i].first<<" "<<vec[i].second<<endl;
                    if(l<vec[i].first && r<=vec[i].second && r>=vec[i].first)
                    {
                        vec[i].first=l;
                        //cout<<vec[i].first<<endl;
                    }
                    else if(r>vec[i].second && l>=vec[i].first && l<=vec[i].second)
                    {
                        vec[i].second=r;
                    }
                    if(l<vec[i].first && r>vec[i].second)
                    {
                        vec[i]={l,r};
                    }
                }
            }
 
        }
        if(flag==0)
        {
            cout<<1<<endl;
            continue;
        }
        int sz=vec.size();
        for(i=0; i<sz; i++)
        {
            //cout<<vec[i].first<<" "<<vec[i].second<<endl;
            if(ansl>vec[i].first)
            {
                ansl=vec[i].first;
            }
            if(ansr<vec[i].second)
            {
                ansr=vec[i].second;
            }
 
        }
        //cout<<ansr<<" "<<ansl<<endl;
        cout<<(ansr-ansl)+1<<endl;
 
    }
    return 0;
}