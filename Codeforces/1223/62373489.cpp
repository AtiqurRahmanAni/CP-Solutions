#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a==1)
            cout<<3<<endl;
        else if(a==2)
        {
            cout<<2<<endl;
        }
        else
        {
            if(a%2==0)
                cout<<0<<endl;
            else
                cout<<1<<endl;
        }
    }
 
    return 0;
}