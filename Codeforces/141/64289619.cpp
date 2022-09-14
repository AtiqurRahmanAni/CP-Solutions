#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a1[26],a2[26],a3[26];
int main()
{
 
    string s1,s2,s3;
    int i,cnt=0,flag=0;
    cin>>s1>>s2>>s3;
    for(i=0; s1[i]; i++)
    {
        a1[s1[i]-'A']++;
    }
    for(i=0; s2[i]; i++)
    {
        a1[s2[i]-'A']++;
    }
    for(i=0; s3[i]; i++)
    {
        a3[s3[i]-'A']++;
    }
    for(i=0; i<26; i++)
    {
        a1[i]+=a2[i];
    }
    for(i=0;i<26;i++)
    {
        if(a1[i]!=a3[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES";
    else
        cout<<"NO";
    puts("");
    return 0;
}