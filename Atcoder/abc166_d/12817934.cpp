#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,x;
    ll i,j;
    bool flag=false;
    cin>>x;
    for(i=-1000;i<=1000;i++)
    {
        for(j=-1000;j<=1000;j++)
        {
            if((i*i*i*i*i)-(j*j*j*j*j)==x)
            {
                cout<<i<<" "<<j<<endl;
                flag=true;
                break;
            }
        }
        if(flag)
            break;
    }
    return 0;
}
