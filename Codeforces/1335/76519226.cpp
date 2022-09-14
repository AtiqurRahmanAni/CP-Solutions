#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,ans;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1 || n==2)
            cout<<0<<endl;
        else
        {
            if(n%2==0)
            {
                ans=n-((n/2)+1);
            }
            else
            {
                ans=n-ceil((double)(n/2)+1);
            }
            cout<<ans<<endl;
        }
 
    }
    return 0;
}