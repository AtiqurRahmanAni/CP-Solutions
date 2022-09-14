#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,enter=0,out=0,maxi=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        enter=enter-a;
        enter+=b;
        if(enter>maxi)
            maxi=enter;
    }
    cout<<maxi<<endl;
    return 0;
}