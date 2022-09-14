#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,ara[1005],cnt,t,i;
    ll ara1[1005];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n,greater<int>());
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]>cnt)
                cnt++;
        }
        cout<<cnt<<endl;
    }
 
    return 0;
}