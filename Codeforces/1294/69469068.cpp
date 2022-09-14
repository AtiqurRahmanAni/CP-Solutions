#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,t,i,j,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<int,int>>vec;
        vec.push_back({0,0});
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            vec.push_back(make_pair(a,b));
        }
        sort(vec.begin(),vec.end());
        /*for(i=0;i<vec.size();i++)
        {
            cout<<vec[i].first<<' '<<vec[i].second<<endl;
        }*/
        int curr_max=0,prev_max=0,flag=0;
        string s="";
        for(i=1; i<=n; )
        {
            curr_max=vec[i].second;
            for(j=i; j<(int)vec.size(); j++)
            {
                if(vec[j].first!=vec[i].first)
                    break;
                if(curr_max<prev_max)
                {
                    flag=1;
                    break;
                }
                if(vec[j].second>curr_max)
                    curr_max=vec[j].second;
            }
            if(curr_max-prev_max<0)
            {
                flag=1;
                break;
            }
            else
            {
                for(k=1; k<=vec[i].first-vec[i-1].first; k++)
                {
                    s+='R';
                }
                for(k=1; k<=curr_max-prev_max; k++)
                {
                    s+='U';
                }
            }
            if(prev_max<curr_max)
                prev_max=curr_max;
            i=j;
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
    return 0;
}