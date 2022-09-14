#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int test,n,i;
   string s1,s2,s;
   cin>>test;
   while(test--)
   {
       s1=s2="";
       cin>>n;
       cin>>s;
       for(i=0;i<n;i++)
       {
           if(s1==s2 && s[i]=='2')
           {
                s1+='1';
                s2+='1';
           }
           else if(s1==s2 && s[i]=='1')
           {
               s1+='1';
               s2+='0';
           }
           else if(s1==s2 && s[i]=='0')
           {
               s1+='0';
               s2+='0';
           }
           else
           {
               s1+='0';
               s2+=s[i];
           }
       }
       cout<<s1<<endl;
       cout<<s2<<endl;
   }
    return 0;
}