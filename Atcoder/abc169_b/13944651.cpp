#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 1000006
int main()
{
    int n,i,flag=0,flag1=0,digit1;
    ll x,mul=1,digit=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        ll temp=x;
        flag1=0;
        while(temp>9)
        {
            digit++;
            digit1=temp%10;
            if(digit1>0)
                flag1=1;
            temp/=10;
        }
        if(flag1==1 && digit>=18)
            mul=-1;
        else
        {
            mul*=x;
        }
        if(mul>1000000000000000000 || mul<0)
        {
            mul=-1;
        }
        if(x==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        mul=0;
    cout<<mul<<endl;
    return 0;
}
