#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n)
    {
      if(n%2==1)
            ans++;
      n/=2;
    }
    cout<<ans<<endl;
    return 0;
}