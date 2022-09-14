#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,i,j,k,t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ara[n*k+1];
        int sz=n*k;
        ll sum=0;
        for(i=1;i<=sz;i++)
        {
            cin>>ara[i];
        }
        int mid= (n/2.0);
        int cnt=0;
        for(i=sz-mid;i>=0;i-=(mid+1))
        {
            sum+=((ll)ara[i]);
            cnt++;
            if(cnt==k)
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}