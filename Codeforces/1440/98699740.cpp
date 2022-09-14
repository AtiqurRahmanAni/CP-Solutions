#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,c0,c1,h,i,t,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>c0>>c1>>h;
        cin>>s;
        int one=0,zero=0,y=0;
        for(char x:s)
        {
            if(x=='0')
                zero++;
            else
                one++;
        }
        //cout<<zero<<" "<<one<<endl;
        int cost0,cost1;
        cost0 = zero*h;
        cost0+=(n*c1);
        cost1 = one*h;
        cost1+=(n*c0);
        int cost3=0;
        cost3=c0*zero+c1*one;
        //cout<<"---\n";
        cout<<min({cost3,cost0,cost1})<<endl;
    }
    return 0;
}