#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        bool ara[n+2][n+2];
        vector<string>v;
        string s;
        for(i=0; i<n; i++)
        {
            cin>>s;
            for(int j=1; j<=n; j++)
            {
                if(s[j-1]=='0')
                {
                    ara[i+1][j]=false;
                }
                else
                {
                    ara[i+1][j]=true;
                }
            }
        }
        int flag=0;
        for(i=1; i<=n-1; i++)
        {
            for(int j=1; j<=n-1; j++)
            {
               if(ara[i][j] && !ara[i+1][j] && !ara[i][j+1])
               {
                   cout<<"NO"<<endl;
                   flag=1;
                   break;
               }
            }
            if(flag)
                break;
        }
        if(!flag)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}