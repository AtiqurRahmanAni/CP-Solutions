#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    double n;
    cin>>t;
    while(t--)
    {
       ll ans=INT_MAX;
       ll mini,maxi;
       string s;
       cin>>s;
       ll a=-1,b=-1,c=-1;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='1')
            a=i;
           else if(s[i]=='2')
            b=i;
           else
            c=i;
           if(a>-1 && b>-1 && c>-1)
           {
               mini=min(a,min(b,c));
               maxi=max(a,max(b,c));
               ans=min(ans,maxi-mini+1);
           }
       }
       if(ans==INT_MAX)
        ans=0;
       cout<<ans<<endl;
    }
    return 0;
}