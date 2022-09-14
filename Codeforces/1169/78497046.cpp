#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,a,b,x,y;
    cin>>n>>a>>x>>b>>y;
    int flag=0;
    b++;
    a--;
    while(1)
    {
        b--;
        a++;
        if(a==b)
        {
            flag=1;
            break;
        }
        //cout<<a<<" "<<b<<endl;
        if(a==x)
            break;
        if(b==y)
            break;
        if(a==n)
            a=0;
        if(b==1)
            b=n+1;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}