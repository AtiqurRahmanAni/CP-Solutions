#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main()
{
 
    int cnt,i,j,t;
    ll x,n,maxi;
    ll vec[160000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
 
        }
        maxi=vec[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(vec[i]>maxi)
                cnt++;
            maxi=min(maxi,vec[i]);
 
 
 
        }
        cout<<cnt<<endl;
    }
    return 0;
}