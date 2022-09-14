#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i,m,x,flag=0;
    set<int>s;
    vector<int>v,v1;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>x;
        if(x==n)
            flag=1;
        s.insert(x);
    }
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>x;
        if(x==n)
            flag=1;
        s.insert(x);
    }
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        v.push_back(*it);
    }
    long int sum=0;
    if(flag==1)
    {
        for(i=0; i<v.size(); i++)
        {
            sum+=v[i];
            if(v[i]==n)
                break;
 
        }
        if(((n*(n+1))/2)!=sum)
            flag=0;
    }
    if(flag==1)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    puts("");
    return 0;
}