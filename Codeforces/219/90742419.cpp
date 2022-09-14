#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int k,i;
    string s,ss="";
    map<char,int>mp;
    cin>>k>>s;
    int sz=s.size();
    for(i=0;i<sz;i++)
    {
        mp[s[i]]++;
    }
    for(auto[key,value]: mp)
    {
        if(value%k!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
        for(i=1;i<=value/k;i++)
           ss+=key;
    }
    for(i=1;i<=k;i++)
        cout<<ss;
    puts("");
    return 0;
}