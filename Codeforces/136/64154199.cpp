#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct student
{
    char name[100];
    int vol;
} ara[150];
int main()
{
    int n,ara[120],i,j,ara1[120];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ara[i];
    }
    for(i=1; i<=n; i++)
    {
        ara1[ara[i]]=i;
 
    }
    for(i=1; i<=n; i++)
    {
        cout<<ara1[i]<<" ";
    }
    return 0;
}