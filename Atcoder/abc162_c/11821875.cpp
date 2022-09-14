#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[300][300];
int gcd(int a,int b)
{
    if(dp[a][b]!=-1)
        return dp[a][b];
    if(b==0)
        return a;
    else return gcd(b,a%b);
}
int main()
{

    ll sum=0;
    int i,j,k,n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=n;k++)
            {

                int temp=gcd(j,k);
                dp[j][k]=temp;
                int temp1=gcd(i,temp);
                dp[i][temp]=temp1;
                sum+=temp1;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
