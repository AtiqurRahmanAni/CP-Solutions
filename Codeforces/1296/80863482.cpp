#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n,i,sz,ans=INT_MAX;
    string s;
    cin>>n>>s;
    map<pair<int,int>,int>point;
    int l=-1,r=-1;
    point.insert({{0,0},0});
    int x=0,y=0,x1,y1;
    sz=s.size();
    for(i=0;i<sz;i++)
    {
        if(s[i]=='L')
            x--;
        else if(s[i]=='R')
            x++;
        else if(s[i]=='U')
            y++;
        else
            y--;
        if(point.find({x,y})!=point.end())
        {
            //cout<<"True"<<endl;
            l=point[{x,y}];
            r=i;
            if(r-l<ans)
            {
                ans=r-l;
                x1=l;
                y1=r;
            }
        }
        point[{x,y}]=i+1;
    }
    if(ans==INT_MAX)
        cout<<-1<<endl;
    else
    {
        cout<<x1+1<<' '<<y1+1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}