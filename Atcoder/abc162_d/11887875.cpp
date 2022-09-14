#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,k,d;
    ll ans,r=0,g=0,b=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<(int)s.size();i++)
    {
        if(s[i]=='R')
            r++;
        else if(s[i]=='G')
            g++;
        else
            b++;
    }
    ans=r*g*b;
    for(i=0;i<n;i++)
    {
        for(d=0;d<n;d++)
        {
            j=i+d;
            k=j+d;
            if(k>=n)
                break;
            if(s[i]!=s[j] && s[i]!=s[k] && s[j]!=s[k])
                ans--;

        }
    }
    cout<<ans<<endl;
    return 0;
}
