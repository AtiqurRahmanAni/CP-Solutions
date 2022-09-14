#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
       cin>>s;
       int zero=0,one=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='1')
            one++;
           else
            zero++;
       }
       if(one==0 || zero==0)
        cout<<s<<endl;
       else
       {
           int sz=s.size();
           int flag=0;
           for(int i=1;i<=sz*2;i++)
           {
               if(!flag)
               {
                   cout<<'1';
                   flag=1;
               }
               else
               {
                   cout<<'0';
                   flag=0;
               }
           }
           puts("");
       }
 
    }
    return 0;
}