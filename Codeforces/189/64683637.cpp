#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a,b,c,n;
vector<int>dp(5000,-1);
int solve(int n)
{
    if(n==0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    int res=INT_MIN;
    if(n>=a)
        res=max(res,1+solve(n-a));
    if(n>=b)
        res=max(res,1+solve(n-b));
    if(n>=c)
        res=max(res,1+solve(n-c));
    dp[n]=res;
    return dp[n];
}
int main()
{
 
    cin>>n>>a>>b>>c;
    cout<<solve(n)<<endl;
    return 0;
}