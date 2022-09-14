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
    int one[n+1]={0};
    for(int i=1;i<=n;i++)
    {
     cin>>ara[i];
     if(ara[i]==1)
     {
      one[i]=one[i-1]+1;
     }
     else
     {
      one[i]=one[i-1];
     }
    }
    if(n==1)
    {
     if(ara[1]==1)
      cout<<0<<endl;
     else
      cout<<1<<endl;
     return 0;
    }
    int ans=-2e5;
    for(int i=1;i<=n;i++)
    {
     int z=0,o=0;
     for(int j=i;j<=n;j++)
     {
      if(ara[j]==1)
       o++;
      else
       z++;
      ans=max(ans,one[i-1]+(one[n]-one[j])+z);
     }
    }
    cout<<max(ans,one[n]-1)<<endl;
    return 0;
}