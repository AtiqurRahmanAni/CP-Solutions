#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<iterator>
#include <map>
#include<cmath>
#include <list>
#include<string>
#include <functional>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n,m,d;
    cin>>n>>m>>d;
    int ara[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ara[i][j];
        }
    }
    ll mini=2e9;
    int flag;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ll cnt=0;
            int x=ara[i][j];
            flag=0;
            for(int k=0;k<n;k++)
            {
                for(int l=0;l<m;l++)
                {
                    if(x==ara[k][l])
                        continue;
                    int diff=abs(ara[k][l]-x);
                    if(diff%d==0)
                    {
                        cnt+=(diff/d);
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag)
                    break;
            }
            if(!flag && mini>cnt)
                mini=cnt;
                
        }
    }
    if(mini==2e9)
        cout<<-1<<endl;
    else
        cout<<mini<<endl;
    return 0;
}