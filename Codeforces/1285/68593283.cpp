#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sum=0;
        ll ara[n+5];
        int flag=0;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            sum+=ara[i];
            if(sum<=0)
            {
                flag=1;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
        {
            sum=0;
            for(i=n-1; i>=0; i--)
            {
                sum+=ara[i];
                if(sum<=0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}