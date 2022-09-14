#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll ara[3],n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>ara[0]>>ara[1]>>ara[2]>>n;
        sort(ara,ara+3);
        ll temp=(ara[2]-ara[1])+(ara[2]-ara[0]);
        if(temp>n)
            cout<<"NO"<<endl;
        else
        {
            n-=temp;
            if(n%3==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}