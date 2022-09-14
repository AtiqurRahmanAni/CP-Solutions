#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int n,res=1,a=8;
    cin>>n;
    while(n)
    {
        if(n%2)
        {
            res=(res*a)%10;
            n--;
        }
        a=(a*a)%10;
        n/=2;
    }
    cout<<res<<endl;
    return 0;
}