#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 1e9+7
typedef long long ll;
using namespace std;
int main()
{
    int t,n,i,j,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[n];
        flag=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=1;i<n;i++)
        {
            if(ara[i-1]<=ara[i])
                flag=1;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
 