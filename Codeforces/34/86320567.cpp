#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+i);
    int sum=0;
    for(i=0;i<m;i++)
    {
        if(ara[i]>=0)
            break;
        sum+=ara[i];
    }
    cout<<-sum<<endl;
    return 0;
}