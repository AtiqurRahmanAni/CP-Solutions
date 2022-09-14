#include<bits/stdc++.h>
using namespace std;
long long int div(int n)
{
    long long int ans=0;
    for(long long int j=1;j*j<=n;j++)
    {
        if(n%j==0)
        {
            if(n/j==j)
                ans=ans+1;
            else
                ans=ans+2;
        }
    }
    return ans;
}
int main()
{
    long long int ans=0,n,i;
    cin>>n;
    for(i=1; i<n; i++)
    {
        ans=ans+((n-1)/i);
    }
    cout<<ans<<endl;
    return 0;
}

