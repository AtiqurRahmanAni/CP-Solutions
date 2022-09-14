#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 10e9+7
using namespace std;
int main()
{
    int t,n,i,m,j,posx,posy;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char ara[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ara[i][j];
            }
        }
//        cout<<posx<<" "<<posy<<endl;
        int cnt=0;
        for(i=0;i<n-1;i++)
        {
            if(ara[i][m-1]!='D')
                cnt++;
        }
        for(i=0;i<m-1;i++)
        {
            if(ara[n-1][i]!='R')
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}