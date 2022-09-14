#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long a,b,c,r,d,mini,maxi,x,y,ans,temp;
    int t;
    //freopen("test.txt","r",stdin);
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>r;
        d=abs(a-b);
        mini=min(a,b);
        maxi=max(a,b);
        x=c+r;
        y=c-r;
        if(y<=mini && x>=maxi)
            ans=0;
        else if(y>=mini && x<=maxi)
            ans=abs(mini-y)+abs(maxi-x);
        else if(y<=maxi && y>=mini)
        {
            ans=abs(d-abs(y-maxi));
        }
        else if(x>=mini && x<=maxi)
        {
            ans=abs(d-abs(x-mini));
        }
        else if(x<=mini||y>=maxi)
            ans=d;
 
        cout<<ans<<endl;
 
    }
    return 0;
}