#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  a,b,c,d,e,f,temp,mini;
    cin>>a>>b>>c>>d>>e>>f;
    mini=min(b,c);
    if(e>f)
    {
        if(a>d)
            temp=d*e;
        else
        {
            temp=a*e;
            d-=a;
            if(d<mini)
                temp+=d*f;
            else
                temp+=mini*f;
        }
 
    }
    else
    {
        if(d<mini)
            temp=d*f;
        else
        {
            temp=mini*f;
            d-=mini;
            if(a>d)
                temp+=d*e;
            else
                temp+=a*e;
        }
    }
    printf("%lld\n",temp);
    return 0;
}