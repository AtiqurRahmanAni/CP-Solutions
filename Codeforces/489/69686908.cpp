#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m,i,j,ans=0;
    cin>>n;
    int boys[n+5];
    for(i=0;i<n;i++)
        cin>>boys[i];
    cin>>m;
    int girls[m+5];
    for(i=0;i<m;i++)
        cin>>girls[i];
    sort(boys,boys+n);
    sort(girls,girls+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(abs(boys[i]-girls[j])<=1)
            {
                ans++;
                girls[j]=INT_MAX;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}