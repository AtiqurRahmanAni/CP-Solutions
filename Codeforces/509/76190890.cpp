#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,sum=0;
    int dp[15][15];
    cin>>n;
    for(i=0;i<n;i++)
        dp[0][i]=1;
    for(i=1;i<n;i++)
    {
        int sum=0;
        //dp[i][0]=1;
        for(j=0;j<n;j++)
        {
            sum+=dp[i-1][j];
            dp[i][j]=sum;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
    return 0;
}