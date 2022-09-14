#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int fx[5]= {0,0,0,-1,1};
int fy[5]= {0,-1,1,0,0};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string s,ans="";
        cin>>s;
        int sz=s.size();
        for(i=0;i<sz;i+=2)
        {
            ans+=s[i];
        }
        ans+=s[sz-1];
        cout<<ans<<endl;
    }
    return 0;
}