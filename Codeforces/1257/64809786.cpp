#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,x,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        int temp=abs(a-b);
        if(temp+x<n-1)
            cout<<temp+x<<endl;
        else
            cout<<n-1<<endl;
    }
    return 0;
}