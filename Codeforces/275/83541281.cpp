#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int fx[5]= {0,0,0,-1,1};
int fy[5]= {0,-1,1,0,0};
int main()
{
    int ara[3][3],i,j,n=3,x,xx,yy;
    bool ans[4][4];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>ara[i][j];
            ans[i][j]=1;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ara[i][j]%2==0)
            {
                continue;
            }
            for(int k=0; k<5; k++)
            {
                xx=fx[k]+j;
                yy=fy[k]+i;
                if(xx>=0 && xx<n && yy>=0 && yy<n)
                {
                    if(ans[yy][xx]==0)
                    {
                        ans[yy][xx]=1;
                    }
                    else
                    {
                        ans[yy][xx]=0;
                    }
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}