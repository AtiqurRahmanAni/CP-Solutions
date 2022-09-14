#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,ans;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        ans=(a+b+c)/2;
        cout<<ans<<endl;
    }
    return 0;
}