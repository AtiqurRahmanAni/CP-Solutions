#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int fx[5]= {0,0,0,-1,1};
int fy[5]= {0,-1,1,0,0};
int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int even=0,odd=0,evenind=0,oddind=0;
        int ara[n+5];
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]%2==0)
                even++;
            else
                odd++;
            if(i%2==0)
                evenind++;
            else
                oddind++;
        }
        if(even!=evenind && odd!=oddind)
        {
            cout<<-1<<endl;
            continue;
        }
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0 && ara[i]%2!=0)
            {
                cnt++;
            }
            else if(i%2!=0 && ara[i]%2==0)
            {
                cnt++;
            }
        }
        cout<<cnt/2<<endl;
    }
    return 0;
}