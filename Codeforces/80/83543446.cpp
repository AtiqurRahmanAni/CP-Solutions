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
    int a,b,i,j,x;
    vector<int>prime;
    prime.push_back(2);
    for(i=3;i<=60;i++)
    {
        x=0;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                x=1;
                break;
            }
        }
        if(x==0)
        {
            prime.push_back(i);
        }
    }
    cin>>a>>b;
    /*for(i=0;i<prime.size();i++)
    {
        cout<<prime[i]<<" ";
    }
    puts("");*/
    int sz=prime.size();
    x=0;
    for(i=0;i<sz;i++)
    {
        if(prime[i]==a && prime[i+1]==b)
        {
            x=1;
            break;
        }
    }
    if(x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}