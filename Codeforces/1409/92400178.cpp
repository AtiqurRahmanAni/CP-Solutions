#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n,t1,t2,t3,n1;
        cin>>a>>b>>x>>y>>n;
        n1=n;
        ll diffa=a-x;
        ll diffb=b-y;
        if(diffa>=n)
        {
            t1=(a-n)*b;
        }
        else
        {
            n-=diffa;
            if(diffb>=n)
            {
                t1=(b-n)*x;
            }
            else
            {
                t1=x*y;
            }
        }
        if(diffb>=n1)
        {
            t2=(b-n1)*a;
        }
        else
        {
            n1-=diffb;
            if(diffa>=n1)
            {
                t2=(a-n1)*y;
            }
            else
            {
                t2=x*y;
            }
        }
        cout<<min(t1,t2)<<endl;
    }
    return 0;
}