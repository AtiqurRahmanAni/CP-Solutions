#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t,n,a,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>k;
        int temp=a+k;
        if(k>a)
            cout<<k-a;
        else if(temp%2==0)
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
        puts("");
    }
    return 0;
}