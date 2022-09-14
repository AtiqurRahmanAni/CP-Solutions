#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("test.txt","r",stdin);
    int t,m,h,x,y;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        x=60-m;
        y=24-(h+1);
        y*=60;
        y+=x;
        cout<<y<<endl;
    }
    return 0;
}