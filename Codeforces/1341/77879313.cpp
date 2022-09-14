#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,n;
        cin>>n>>a>>b>>c>>d;
        int lr=a-b;
        int hr=a+b;
        int lp=c-d;
        int hp=c+d;
        if(hr*n<lp || lr*n>hp)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
 
    }
    return 0;
}