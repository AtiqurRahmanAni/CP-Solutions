#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    map<int,int>mp;
    int n,i,x;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>x;
        mp[x]++;
    }
    for(i=1;i<=n;i++)
    {
        cout<<mp[i]<<endl;
    }
    return 0;
}
