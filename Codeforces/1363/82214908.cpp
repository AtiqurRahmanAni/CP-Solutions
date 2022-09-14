#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 1000006
int main()
{
    int t,n,i,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int sz=s.size();
        int ans=INT_MAX;
        int one=0,zero=0;
        for(i=0;i<sz;i++)
        {
            one=zero=0;
            for(j=0;j<i;j++)
            {
                if(s[j]=='1')
                    one++;
            }
            for(j=i+1;j<sz;j++)
            {
                if(s[j]=='0')
                    zero++;
            }
            ans=min(one+zero,ans);
        }
        for(i=0;i<sz;i++)
        {
            one=zero=0;
            for(j=0;j<i;j++)
            {
                if(s[j]=='0')
                    zero++;
            }
            for(j=i+1;j<sz;j++)
            {
                if(s[j]=='1')
                    one++;
            }
            ans=min(one+zero,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}