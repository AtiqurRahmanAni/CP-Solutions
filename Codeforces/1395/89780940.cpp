#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 1073741824
typedef long long ll;
using namespace std;
int n,m,sx,sy;
int fx[]={1,0,0,-1};
int fy[]={0,-1,1,0};
int isSafe(int M[][101], int row, int col)
{
    return (row >= 0) && (row < n) && (col >= 0) && (col < m) && (!M[row][col]);
}
void dfs(int ara[][101],int row,int col)
{
    ara[row][col]=1;
    cout<<row+1<<" "<<col+1<<endl;
    for(int k=0;k<4;k++)
    {
        if(isSafe(ara,row+fx[k],col+fy[k]))
        {
            dfs(ara,row+fx[k],col+fy[k]);
        }
    }
}
int main()
{
    cin>>n>>m>>sx>>sy;
    int ara[101][101];
    sx--;
    sy--;
    memset(ara,0,sizeof(ara));
    dfs(ara,sx,sy);
    return 0;
}