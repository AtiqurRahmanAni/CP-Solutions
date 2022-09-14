#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    map<string,int>mp;
    int n,i;
    string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
    }
    int maxi=INT_MIN;
    for(auto[key,value]:mp)
    {
        if(value>maxi)
        {
            maxi=value;
            s=key;
        }
    }
    cout<<s<<endl;
    return 0;
}