#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a1,b1,a2,b2,t;
    cin>>t;
    while(t--)
    {
        cin>>a1>>b1;
        cin>>a2>>b2;
        if(a1>b1)
            swap(a1,b1);
        if(a2>b2)
            swap(a2,b2);
        if(a1==a2 && (b1+b2)==a1)
            cout<<"Yes"<<endl;
        else if(b1==b2 && (a1+a2)==b1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}