#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,k,cnt=0;
    cin>>n>>k;
    getchar();
    cin>>s;
    if(k==0)
        cout<<s<<endl;
    else
    {
        if(s.size()==1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0;s[i]!=NULL;i++)
            {
                if(s[0]=='1' && i==0)
                    continue;
                if(s[i]=='0')
                    continue;
                if(cnt==k)
                    break;
                if(s[0]!='1')
                    s[0]='1';
                else
                    s[i]='0';
                cnt++;
            }
            cout<<s<<endl;
        }
    }
 
    return 0;
}