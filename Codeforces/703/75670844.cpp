#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,a,b,mis=0,cris=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            mis++;
        else if(a<b)
            cris++;
    }
    if(mis>cris)
        cout<<"Mishka"<<endl;
    else if(mis<cris)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}