#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ara[120],i,x;
    cin>>a>>b;
    for(i=1;i<=a;i++)
    {
        cin>>ara[i];
    }
    x=ara[b];
    for(i=1;i<=a;i++)
    {
        if(ara[i]<x || ara[i]==0)
        {
            break;
        }
    }
    cout<<i-1<<endl;
 
    return 0;
}