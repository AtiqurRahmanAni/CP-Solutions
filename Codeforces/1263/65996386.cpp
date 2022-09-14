#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    //freopen("test.txt","r",stdin);
    int mini,maxi,t,a,b,c,ans,t1;
    vector<int>ara;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>a>>b>>c;
        ara.push_back(a);
        ara.push_back(b);
        ara.push_back(c);
        sort(ara.begin(),ara.end());
        if(ara[0]+ara[1]>=ara[2])
            ans=(ara[0]+ara[1]+ara[2])/2;
        else
            ans=ara[0]+ara[1];
        cout<<ans<<endl;
        ara.clear();
    }
    return 0;
}