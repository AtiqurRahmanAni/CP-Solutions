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
 
    int n;
    cin>>n;
    int ara[n+1];
    ll cum1[n+1]={0},cum2[n+1]={0};
    for(int i=1;i<=n;i++)
    {
     cin>>ara[i];
     cum1[i]=cum1[i-1]+ara[i];
    }
    sort(ara+1,ara+n+1);
    for(int i=1;i<=n;i++)
    {
     cum2[i]=cum2[i-1]+ara[i];
    }
    int q,type,l,r;
    cin>>q;
    while(q--)
    {
     cin>>type>>l>>r;
     if(type==1)
     {
      cout<<cum1[r]-cum1[l-1]<<endl;
     }
     else
     {
      cout<<cum2[r]-cum2[l-1]<<endl;
     }
    }
    return 0;
}