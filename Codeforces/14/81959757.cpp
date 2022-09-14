#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int n,m,i,j,first,last,flag1=0;
    cin>>n>>m;
    vector<string>vec(n+1);
    int mini=INT_MAX,maxi=0;
    for(i=0;i<n;i++)
    {
        cin>>vec[i];
        for(j=0;j<m;j++)
        {
            if(vec[i][j]=='*')
            {
                if(flag1==0)
                {
                    first=i;
                    flag1=1;
                }
                last=i;
                mini=min(j,mini);
                maxi=max(j,maxi);
            }
        }
    }
    for(i=first;i<=last;i++)
    {
        for(j=mini;j<=maxi;j++)
        {
            cout<<vec[i][j];
        }
        cout<<endl;
    }
    return 0;
}