#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,ans;
    cin>>a>>b;
    ans=a+a/(b-1);
    if(a%(b-1)==0)
        ans--;
    cout<<ans<<endl;
    return 0;
}