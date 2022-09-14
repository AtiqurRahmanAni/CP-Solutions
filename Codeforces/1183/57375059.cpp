#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,i,k,n,mi,ma,ans,x,ara[105];
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
 
        }
        mi=*min_element(ara,ara+i);
        ma=*max_element(ara,ara+i);
        ans=mi+k;
        if(ans>=ma-k)
            cout<<ans<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}