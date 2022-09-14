#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int t,n,x;
    cin>>t;
    while(t--)
    {
        map<int,int>mp;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        int ok=0;
        for(auto [key,value]:mp)
        {
            if(value>1)
            {
                ok=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(!ok)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}