#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b,t,i;
    cin>>t;
    for(int ta=1; ta<=t; ta++)
    {
        cin>>a>>b;
        if(a%2==0 && b%2!=0)
            cout<<"NO"<<endl;
        else if(a%2!=0 && b%2==0)
            cout<<"NO"<<endl;
        else
        {
            if(a/b>=b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}