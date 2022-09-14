#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c;
    d=a+b*c;
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    h=a+b+c;
    int ans=max(max(max(max(d,e),f),g),h);
    cout<<ans<<endl;
    return 0;
}