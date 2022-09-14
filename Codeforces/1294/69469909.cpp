#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,b,c,j,k,i;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int flag=0;
        ll temp=sqrt(n);
        for(i=2;i<temp;i++)
        {
            if(n%i==0)
            {
                for(j=i+1;j<=temp;j++)
                {
                    if(n%j==0)
                    {
                        if(n%(i*j)==0 && n/(i*j)!=i && n/(i*j)!=j && n/(i*j)!=1)
                        {
                            cout<<"YES"<<endl;
                            cout<<i<<' '<<j<<' '<<n/(i*j)<<endl;
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag)
                break;
 
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
    return 0;
}