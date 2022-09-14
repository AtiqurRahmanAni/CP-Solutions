#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,i,j,k,t,x;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sum=0;
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
            maxi = max(x,maxi);
        }
        ll k=max(maxi,(int)(ceil(sum/((double)(n-1)))));
        /*if(sum%(n-1)==0)
        {
            cout<<0<<endl;
            continue;
        }*/
        cout<<((n-1)*k)-sum<<endl;
    }
 
    return 0;
}