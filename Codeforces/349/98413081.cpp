#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,i,j;
    cin>>n;
    int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int flag=0;
    int x=0,y=0,z=0;
    long money=0;
    for(i=0; i<n; i++)
    {
        if(ara[i]==25)
            x++;
        else if(ara[i]==50)
        {
            y++;
            x--;
            if(x<0)
                flag=1;
        }
        else if(ara[i]==100)
        {
            if(x>=1 && y>=1)
            {
                x--;
                y--;
            }
            else if(x>=3)
            {
                x-=3;
            }
            else
                flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
    return 0;
}