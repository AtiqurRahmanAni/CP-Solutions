#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 1073741824
typedef long long ll;
using namespace std;
 int x[1000001];
int main()
{
    int a,b,c,i,j,k;
    ll sum=0;
    cin>>a>>b>>c;
    for(i=1;i<=1000000;i++)
    {
        for(j=i;j<=1000000;j+=i)
        {
            x[j]++;
        }
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            for(k=1;k<=c;k++)
            {
                sum+=x[i*j*k];
                if(sum>MOD)
                {
                    sum%=MOD;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}