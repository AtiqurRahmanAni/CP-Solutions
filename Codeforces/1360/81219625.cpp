#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int t1=a+a;
        int t2=b+b;
        int t3=a+b;
        int m1=min(a,b);
        int ma=max(a,b);
        if(m1+m1>=ma)
            cout<<(m1+m1)*(m1+m1)<<endl;
        else
            cout<<ma*ma<<endl;
    }
    return 0;
}