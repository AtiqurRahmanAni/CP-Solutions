#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if((a-b)!=1 && (a-b)!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}