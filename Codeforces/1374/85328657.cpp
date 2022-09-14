#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        if(n%x==y)
        {
            cout<<n<<endl;
        }
        else if(n%x>y)
        {
            cout<<n-((n%x)-y)<<endl;
        }
        else
        {
            cout<<n-((x-y)+(n%x))<<endl;
        }
    }
    return 0;
}