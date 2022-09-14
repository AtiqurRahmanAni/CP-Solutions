#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ara[26];
int main()
{
    string s;
    int i,cnt=0;
    getline(cin,s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            ara[s[i]-'a']=1;
        }
    }
    for(i=0;i<26;i++)
    {
        if(ara[i]==1)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}