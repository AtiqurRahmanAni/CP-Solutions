#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,t;
    cin>>t;
    while(t--)
    {
       string s,s1;
       s.push_back('R');
       cin>>s1;
       s+=s1;
       s.push_back('R');
       int maxi=0,cnt=0;
       for(i=0;i<s.size();i++)
       {
           if(s[i]=='L')
            cnt++;
           else
           {
               maxi=max(maxi,cnt+1);
               cnt=0;
           }
       }
       cout<<maxi<<endl;
    }
    return 0;
}