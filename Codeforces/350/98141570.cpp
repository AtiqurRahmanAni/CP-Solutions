#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,m,i,j;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int maxA=a[n-1];
    int minB=b[0];
    int x=a[0]*2;
    if(maxA>=minB || x>=minB)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<max(x,maxA)<<endl;
    }
    return 0;
}