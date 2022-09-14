#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int a,b,ans,temp,c,d;
    cin>>a>>b;
    ans=a;
    while(a>=b)
    {
       c=a/b;
       ans+=c;
       a=c+(a%b);
 
 
    }
    cout<<ans<<endl;
 
    return 0;
}