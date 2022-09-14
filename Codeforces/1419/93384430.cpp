#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
 
    int t,i;
    ll n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll i=1,j=1,prev=1;
        int cnt=0;
        while(i<=n)
        {
            cnt++;
            prev=i;
            n-=i;
            j*=4;
            i=(j+(prev*2));
            //cout<<i<<"->"<<endl;
        }
        cout<<cnt<<endl;
    }
    return 0;
}