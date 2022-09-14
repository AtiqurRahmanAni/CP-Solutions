#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int m,n,cnt=0;
    cin>>m>>n;
    while(n--)
    {
        if(m%10!=0)
            m-=1;
        else
            m/=10;
    }
    cout<<m<<endl;
    return 0;
}