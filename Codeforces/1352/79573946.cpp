#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
int main()
{
    int t;
    int n0,n1,n2,i,sz;
    cin>>t;
    while(t--)
    {
        cin>>n0>>n1>>n2;
        string s;
        if(n0!=0)
        {
            for(i=1; i<=n0; i++)
            {
                s+='0';
            }
            if(n1==0)
            {
                s+='0';
            }
        }
        if(n1!=0)
        {
            int flag=0;
            for(i=1; i<=n1; i++)
            {
                if(flag==0)
                {
                    s+='0';
                    flag=1;
                }
                else
                {
                    s+='1';
                    flag=0;
                }
            }
            sz=s.size()-1;
            if(s[sz]=='0')
                s+='1';
            else
                s+='0';
        }
        if(n2!=0)
        {
            sz=s.size()-1;
            if(n0==0 && n1==0)
            {
                 for(i=1; i<=n2; i++)
                {
                    s+='1';
                }
                s+='1';
                cout<<s<<endl;
                continue;
            }
            if(s[sz]=='0')
            {
                s.pop_back();
                for(i=1; i<=n2; i++)
                {
                    cout<<1;
                }
                cout<<1;
                cout<<s<<endl;
                continue;
            }
            else
            {
                for(i=1; i<=n2; i++)
                {
                    s+='1';
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
 