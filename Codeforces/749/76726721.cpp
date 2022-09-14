#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i;
    cin>>n;
    int ans=0;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        for(i=1; i<=n/2; i++)
            cout<<'2'<<' ';
    }
    else
    {
        cout<<n/2<<endl;
        for(i=1; i<n/2; i++)
            cout<<'2'<<' ';
        cout<<'3';
    }
    puts("");
    return 0;
}