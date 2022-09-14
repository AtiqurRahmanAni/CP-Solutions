#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    string s1;
    int flag=0,i;
    int n=5;
    cin>>s;
    for(i=1;i<=n;i++)
    {
        cin>>s1;
        if(s[0]==s1[0] || s[1]==s1[1])
            flag=1;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}