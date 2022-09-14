#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,i,j,k,t;
    string s;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==y)
        {
            cout<<x+y<<endl;
        }
        else
        {
            cout<<max(x,y)*2-1<<endl;
        }
 
    }
 
    return 0;
}