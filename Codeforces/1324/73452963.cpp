#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,t,ara[5006];
    cin>>t;
    while(t--)
    {
        int flag=0;
        int maxi=0;
        cin>>n;
        for(i=0; i<n; i++)
            cin>>ara[i];
        for(i=0; i<n-2; i++)
        {
           for(j=i+2;j<n;j++)
           {
               //cout<<ara[i]<<' '<<ara[j]<<endl;
               if(ara[i]==ara[j])
               {
                   flag=1;
                   break;
               }
           }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}