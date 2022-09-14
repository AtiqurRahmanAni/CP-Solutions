#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long int a,b,n,s,t;
int main()
{
 
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        if(b>=s)
            cout<<"YES"<<endl;
        else
        {
            int temp;
            temp=s/n;
            int z;
            if(temp>a)
            {
                z=a*n;
            }
            else
            {
                z=temp*n;
            }
            z=z+b;
            if(z>=s)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
        }
    }
    return 0;
}