#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,t,ara[150];
    cin>>t;
    while(t--)
    {
        int flag=0;
        int maxi=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            if(ara[i]>maxi)
                maxi=ara[i];
        }
        for(i=0; i<n; i++)
        {
            if(ara[i]==maxi)
                continue;
            if((maxi-ara[i])%2!=0)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}