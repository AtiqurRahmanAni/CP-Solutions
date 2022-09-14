#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int a[] = {0,1,2,3,4};
    int b[5][5];
    int i,j,sum,maxi = INT_MIN, n=5;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    do{
        sum=b[a[0]][a[1]]+b[a[1]][a[0]];
        sum+=b[a[2]][a[3]]+b[a[3]][a[2]];
 
        sum+=b[a[1]][a[2]]+b[a[2]][a[1]];
        sum+=b[a[3]][a[4]]+b[a[4]][a[3]];
 
        sum+=b[a[2]][a[3]]+b[a[3]][a[2]];
 
        sum+=b[a[3]][a[4]]+b[a[4]][a[3]];
        maxi=max(sum,maxi);
    }while(next_permutation(a,a+5));
    cout<<maxi<<endl;
    return 0;
}