#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,one,two,three,n,x;
    long long ans1,ans;
    cin>>t;
    while(t--)
    {
        one=two=three=ans=ans1=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x%3==0)
                ans++;
            else if(x%3==1)
                one++;
            else if(x%3==2)
                two++;
        }
        int mn=min(one,two);
        ans=ans+mn;
        one-=mn;
        two-=mn;
        ans+=(one+two)/3;
        cout<<ans<<endl;
 
    }
    return 0;
}