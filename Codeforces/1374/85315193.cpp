#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int flag=0;
        int ans=0;
        while(1)
        {
            if(n%6==0)
            {
                n/=6;
            }
            else
            {
                n*=2;
                if(n%6!=0)
                {
                    flag=1;
                    break;
                }
            }
            ans++;
            if(n==1)
                break;
        }
        if(flag==0)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}