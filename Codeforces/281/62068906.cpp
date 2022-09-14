#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    if(s[0]>='a'&& s[0]<='z')
    {
 
        s[0]=s[0]-32;
    }
   cout<<s;
 
    puts("");
 
    return 0;
}