#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;s[i]!=NULL;i++)
    {
 
       if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
       {
           cout<<'.';
           cout<<s[i];
       }
    }
 
    puts("");
 
    return 0;
}