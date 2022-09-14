#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,i;
    int x,y;
    vector<pair<int,int>>vec;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        vec.push_back({x,y});
    }
    int oddr=0,oddl=0,right=0,left=0,suml=0,sumr=0;
    for(i=0;i<n;i++)
    {
        pair<int,int>p=vec[i];
        if(p.first%2!=0 && p.second%2==0)
            oddl++;
        if(p.first%2==0 && p.second%2!=0)
            oddr++;
        if(p.first%2!=0)
            left++;
        if(p.second%2!=0)
            right++;
        suml+=p.first;
        sumr+=p.second;
    }
    if(suml%2==0 && sumr%2==0)
    {
        cout<<0<<endl;
    }
    else if(suml%2!=0 && sumr%2!=0)
    {
        if(oddr>0 || oddl>0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else
        cout<<-1<<endl;
    return 0;
}