#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    char ch;
    string s;
    int i,upper=0;
    cin>>s;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            upper++;
        }
    }
    if(upper==s.size())
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else if(s[0]>='a' && s[0]<='z' && upper==s.size()-1)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        printf("%c",s[0]-32);
        for(i=1;i<s.size();i++)
            cout<<s[i];
        puts("");
    }
    else
        cout<<s<<endl;
    return 0;
}