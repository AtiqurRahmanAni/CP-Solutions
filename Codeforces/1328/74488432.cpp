#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll t,n,i,m;
   cin>>t;
   ll upper,lower;
   while(t--)
   {
       string s="";
       cin>>n>>m;
       ll com=(n*(n-1))/2;
       ll pattern=n-1;
       ll pos1=0,pos2;
       for(i=com;i>=1;i-=(pattern+1))
       {
           //cout<<i<<' '<<i-pattern+1<<endl;
           upper=i;
           lower=i-pattern+1;
           if(m<=upper && m>=lower)
           {
               break;
           }
           pos1++;
           pattern--;
       }
      //cout<<"Pos1:"<<pos1<<' '<<"Pos2:"<<pos1+(upper-m)<<endl;
      pos2=pos1+(upper-m);
      pos2++;
      for(int i=0;i<n;i++)
      {
          if(i==pos1)
            cout<<'b';
          else if(i==pos2)
          {
              cout<<'b';
          }
          else
            cout<<'a';
      }
      puts("");
 
   }
    return 0;
}