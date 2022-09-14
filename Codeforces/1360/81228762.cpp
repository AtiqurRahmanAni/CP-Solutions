#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int ara[n+1];
       for(i=0;i<n;i++)
       {
           cin>>ara[i];
       }
       sort(ara,ara+i);
       int mini=INT_MAX;
       for(i=1;i<n;i++)
       {
           if(ara[i]-ara[i-1]<mini)
           {
               mini=ara[i]-ara[i-1];
           }
       }
       cout<<mini<<endl;
    }
    return 0;
}