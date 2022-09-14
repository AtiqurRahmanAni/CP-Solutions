#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    int i;
    if(s[0]>='a' && s[0]<='z')
    {
        int flag=0;
        for(i=1;i<(int)s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<s<<endl;
        else
        {
            for(i=0;i<(int)s.size();i++)
            {
                if(i==0)
                    cout<<(char)(s[0]-32);
                else
                    cout<<(char)(s[i]+32);
            }
            puts("");
        }
    }
    else
    {
        int flag=0;
        for(i=1;i<(int)s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                flag=1;
                break;
            }
 
        }
        if(flag)
            cout<<s<<endl;
        else
        {
            for(i=0;i<(int)s.size();i++)
            {
                    cout<<(char)(s[i]+32);
            }
            puts("");
        }
    }
    return 0;
}