#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i,mini=INT_MAX,x,pos;
    cin>>n;
    map<int,int>mp;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x]++;
        if(x<mini)
        {
            mini=x;
            pos=i+1;
        }
    }
    if(mp[mini]>1)
        cout<<"Still Rozdil"<<endl;
    else
        cout<<pos<<endl;
    return 0;
}