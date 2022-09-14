#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    double n,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        if(d<=n)
            cout<<"YES"<<endl;
        else
        {
            int f=0;
            for(int i=1;i<=n/2;i++)
            {
                double t1=i;
                double x=ceil(d/(t1+1));
                if(t1+x<=n)
                {
                    f=1;
                    break;
                }
            }
            if(f)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}