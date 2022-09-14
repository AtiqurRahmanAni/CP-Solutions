#include<bits/stdc++.h>
#define PI 2*acos(0.0)
using namespace std;
int main()
{
    int n,i,a=0,b=0,a1=0,b1=0,c=0,j;
    char ch,s[200008],s1[200008];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ch;
        s[i]=ch;
    }
    for(i=0;i<=n-2;i+=2)
    {
        //cout<<i<<endl;
        if(s[i]==s[i+1])
        {
            c++;
            if(s[i]=='a')
                s[i+1]='b';
            else
                s[i+1]='a';
        }
    }
    cout<<c<<endl;
    for(i=0;i<n;i++)
        cout<<s[i];
    puts("");
    return 0;
}