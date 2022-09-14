#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i,j;
    int space,star=1;
    cin>>n;
    space=n*2;
    for(i=1;i<=n+1;i++)
    {
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<j;
            if(i!=1)
                cout<<" ";
        }
        for(j=j-2;j>=0;j--)
        {
            cout<<j;
            if(j>0)
                cout<<" ";
        }
        space-=2;
        //cout<<"+";
        cout<<endl;
    }
    space=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=0;j<=n-i;j++)
        {
            cout<<j;
            if(i!=n)
                cout<<" ";
        }
        for(j=j-2;j>=0;j--)
        {
            cout<<j;
            if(j>0)
                cout<<" ";
        }
        space+=2;
        //cout<<"+";
        cout<<endl;
    }
    return 0;
}