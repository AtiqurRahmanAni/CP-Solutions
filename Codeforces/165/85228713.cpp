#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,a,b,i,j,x,y,f1,f2,f3,f4;
    cin>>n;
    vector<pair<int,int>>vec;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        vec.push_back({a,b});
    }
    int ans=0;
    for(i=0;i<n;i++)
    {
        f1=f2=f3=f4=0;
        a=vec[i].first;
        b=vec[i].second;
        for(j=0;j<n;j++)
        {
            x=vec[j].first;
            y=vec[j].second;
            if(x>a && y==b)
            {
                f1=1;
            }
            else if(x<a && y==b)
            {
                f2=1;
            }
            else if(x==a && y>b)
            {
                f3=1;
            }
            else if(x==a && y<b)
            {
                f4=1;
            }
        }
        if(f1+f2+f3+f4==4)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}