#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s1,s2;
    long long a,b,i,j,ans;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return 0;
    }
    while(a)
    {
        if(a%2==0)
            s1+='0';
        else
            s1+='1';
        a/=2;
    }
    while(b)
    {
        if(b%2==0)
            s2+='0';
        else
            s2+='1';
        b/=2;
    }
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    //cout<<s1<<' '<<s2<<endl;
    if(s1.size()!=s2.size())
    {
        ans=powl(2,s2.size())-1;
    }
    else
    {
        int power=0;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
                break;
            if(s1[i]==s2[i])
                power++;
        }
        power=s1.size()-power;
        ans=powl(2,power)-1;
    }
    cout<<ans<<endl;
    return 0;
}