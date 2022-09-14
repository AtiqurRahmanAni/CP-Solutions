#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,test,n,i,j,m;
    cin>>t;
    while(t--)
    {
        int flag=0,x,ans;
        cin>>n>>m;
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        for(i=0;i<m;i++)
        {
            cin>>x;
            if(mp[x]!=0 && flag==0)
            {
                flag=1;
                ans=x;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<1<<" "<<ans<<endl;
        }
 
    }
    return 0;
}