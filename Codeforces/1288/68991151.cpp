#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int i,t;
    double n,d;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n>>d;
        if(d<=n)
            cout<<"YES"<<endl;
        else
        {
            for(double i=0; i<=n; i++)
            {
                if((i+ceil(d/(i+1)))<=n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}