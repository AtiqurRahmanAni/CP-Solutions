#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 10e9+7
using namespace std;
int main()
{
    int n,m,i,j;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;
    if(n>=m)
    {
        for(i=0;i<m;i++)
        {
            cout<<"BG";
        }
        for(i=1;i<=n-m;i++)
            cout<<'B';
    }
    else if(n<m)
    {
        for(i=0;i<n;i++)
        {
            cout<<"GB";
        }
        for(i=1;i<=m-n;i++)
        {
            cout<<'G';
        }
    }
    puts("");
    return 0;
}