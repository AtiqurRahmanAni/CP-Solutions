#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,ab,m,ans,ma;
    cin>>a>>b>>ab;
    m=min(a,b);
    ma=max(a,b);
    if(m==ma)
       {
           ans=a+b+(ab*2);
           cout<<ans<<endl;
       }
    else
    {
        ans=m+(m+1)+(ab*2);
        cout<<ans<<endl;
    }
 
    return 0;
 
}