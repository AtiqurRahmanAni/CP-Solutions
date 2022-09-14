#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int temp=abs(a-b);
        int mod,ans=0;
        if(temp>=5)
        {
            ans+=temp/5;
            mod=temp%5;
            temp=mod;
        }
        if(temp>=2)
        {
            ans+=temp/2;
            mod=temp%2;
            temp=mod;
        }
        if(temp>=1)
        {
            ans+=temp/1;
            mod=temp%1;
            temp=mod;
        }
        cout<<ans<<endl;
 
    }
    return 0;
 
}