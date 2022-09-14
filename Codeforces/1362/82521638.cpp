#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    int a,b,x,n,i,j;
    int t;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        cin>>n;
        vector<int>ara(n),ara1(n);
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        sort(ara.begin(),ara.end());
        int flag=0;
        for(i=1; i<=1024; i++)
        {
            for(j=0; j<n; j++)
            {
                ara1[j]=ara[j]^i;
            }
            sort(ara1.begin(),ara1.end());
            if(ara1==ara)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}