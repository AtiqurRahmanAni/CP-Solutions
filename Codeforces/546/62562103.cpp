#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int k,w,n,i;
    ll sum=0;
    cin>>k>>w>>n;
    for(i=1;i<=n;i++)
    {
        sum+=(i*k);
    }
    if(sum<w)
        cout<<0<<endl;
    else
        cout<<sum-w<<endl;
    return 0;
}