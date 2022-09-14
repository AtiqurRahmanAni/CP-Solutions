#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
int ara[200][200];
int main()
{
    fastIO
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>ara[i][j];
                if((i+j)%2==ara[i][j]%2)
                {
                    ara[i][j]++;
                }
            }
        }
        //cout<<"===="<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cout<<ara[i][j]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}