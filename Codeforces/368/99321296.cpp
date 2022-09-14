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
#include <stdlib.h>
#include<ctime>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n,m;
    cin>>n>>m;
    int ara[n+1];
    int unique[n+1]={0};
    set<int>st;
    for(int i=1;i<=n;i++)
    {
     cin>>ara[i];
    }
    for(int i=n;i>=1;i--)
    {
     st.insert(ara[i]);
     unique[i]=st.size();
    }
    int x;
    while(m--)
    {
     cin>>x;
     cout<<unique[x]<<endl;
    }
    return 0;
}