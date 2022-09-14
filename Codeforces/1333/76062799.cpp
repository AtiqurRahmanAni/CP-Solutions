#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int fone=INT_MAX,fminone=INT_MAX;
    int i,j,n;
    cin>>n;
    int a[n+5],b[n+5];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        cin>>b[i];
    for(i=0; i<n; i++)
    {
        if(a[i]==1)
        {
            fone=i;
            break;
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==-1)
        {
            fminone=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>b[i])
        {
            if(fminone>=i)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(a[i]<b[i])
        {
            if(fone>=i)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}