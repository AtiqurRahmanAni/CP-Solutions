#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int ara[n];
        for(i=0; i<n; i++)
            cin>>ara[i];
        sort(ara,ara+i,greater<int>());
        int ans=0,cnt=0;
        for(i=0;i<n;i++)
        {
            cnt++;
            if(ara[i]*cnt>=x)
            {
                ans++;
                cnt=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
 
 
 