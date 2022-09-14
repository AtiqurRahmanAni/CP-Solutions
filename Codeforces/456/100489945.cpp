#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<iterator>
#include <map>
#include<cmath>
#include <list>
#include<string>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define line cout<<endl
typedef long long ll;
typedef long long ull;
ll MOD = 1000000007;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int n,a,b;
    cin>>n;
    set<pair<int,int>>st;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        st.insert({a,b});
    }
    int flag=0;
    int bb=INT_MAX,aa=INT_MIN,cc=INT_MAX,dd=INT_MIN;
    for(auto it=st.begin(); it!=st.end(); it++)
    {
        if(it->first>aa)
        {
            aa=it->first;
            bb=it->second;
        }
        if(it->second>dd)
        {
            dd=it->second;
            cc=it->first;
        }
        if(aa>cc && bb<dd)
        {
            cout<<"Happy Alex\n";
            flag=1;
            break;
        }
    }
    //cout<<aa<<" "<<bb<<" "<<cc<<" "<<dd<<endl;
 
    if(!flag)
    {
        cout<<"Poor Alex\n";
    }
    return 0;
}