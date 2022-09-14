#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int up=0,lo=0,i=0;
    string s;
    cin>>s;
    while(s[i]!=NULL)
    {
        if(s[i]>='A'&&s[i]<='Z')
            up++;
        else
            lo++;
        i++;
    }
    if(up<lo || lo==up)
        transform(s.begin(),s.end(),s.begin(),::tolower);
    else if(up>lo)
         transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    return 0;
}