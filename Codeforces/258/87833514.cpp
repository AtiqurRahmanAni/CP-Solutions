#include<bits/stdc++.h>
using namespace std;
bool ara[1299710];
void prime(int n)
{
    int i,j;
    for(i=2; i*i<=1299710; i++)
    {
        if(ara[i]==false)
        {
            for(j=i*i; j<=1299710; j+=i)
            {
                ara[j]=true;
            }
        }
    }
    ara[0]=ara[1]=true;
    int cnt=0;
    for(i=2; ; i++)
    {
        if(ara[i]==false)
        {
            cnt++;
            cout<<i<<" ";
        }
        if(cnt==n)
            break;
    }
}
int main()
{
 
    string s;
    int i,pos=-1;
    cin>>s;
    int sz=s.size();
    for(i=0;i<sz;i++)
    {
        if(s[i]=='0')
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        for(i=0;i<sz-1;i++)
            cout<<s[i];
    }
    else
    {
        for(i=0;i<sz;i++)
        {
            if(i==pos)
                continue;
            cout<<s[i];
        }
    }
    puts("");
    return 0;
}