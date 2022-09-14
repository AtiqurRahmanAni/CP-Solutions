#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,i;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        string s;
        cin>>n>>a>>b;
        char ch='a';
        for(i=1;i<=b;i++)
        {
            s.push_back(ch);
            ch++;
        }
        for(;i<=a;i++)
        {
            s.push_back('a');
        }
        for(i=0;i<n;i++)
        {
            cout<<s[i%a];
        }
        puts("");
    }
    return 0;
}