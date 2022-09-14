#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 10e9+7
using namespace std;
int main()
{
    int y,n,k,flag=0,i=1;
    cin>>y>>k>>n;
    if(n<=y)
    {
        cout<<-1<<endl;
        return 0;
    }
    while(1)
    {
        if(k*i>y)
        {
            if(k*i<=n)
            {
                cout<<k*i-y<<" ";
                flag=1;
            }
            else
                break;
        }
        i++;
    }
    if(!flag)
        cout<<-1<<endl;
    return 0;
}