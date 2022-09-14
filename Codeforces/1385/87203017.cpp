#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,test,i,n,x,y,z,a,b,c,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n];
        for(i=1; i<=n; i++)
        {
            cin>>ara[i];
        }
        for(i=n-1; i>=1; i--)
        {
            if(ara[i]<ara[i+1])
            {
                break;
            }
        }
        for(; i>=1; i--)
        {
            if(ara[i]>ara[i+1])
                break;
        }
        cout<<i<<endl;
    }
    return 0;
}