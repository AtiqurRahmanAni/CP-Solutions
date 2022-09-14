#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int even=0,odd=0;
        int ara[n+1];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            if(ara[i]&1)
                odd++;
            else
                even++;
        }
        sort(ara,ara+i);
        if(even%2==0 && odd%2==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int flag=0;
        for(i=1;i<n;i++)
        {
            if(ara[i]-ara[i-1]==1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}