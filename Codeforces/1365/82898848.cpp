#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    int t,n,m,i,j,f,zero,one;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>ara1(n);
        f=0,zero=0,one=0;
        for(i=0; i<n; i++)
        {
            cin>>ara1[i];
            if(i>0)
            {
                if(ara1[i-1]>ara1[i])
                {
                    f=1;
                }
            }
        }
        for(i=0; i<n; i++)
        {
           cin>>m;
           if(m==0)
            zero++;
           else
            one++;
        }
        if(f==0 || (zero>0 && one>0))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
 
    }
    return 0;
}