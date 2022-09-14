#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c;
    int t,f;;
    cin>>t;
    while(t--)
    {
       cin>>n;
           c=0;
           f=0;
           while(n%2==0 || n%3==0 || n%5==0)
           {
              if(n%2==0)
              {
                  c++;
                  n/=2;
              }
              else if(n%3==0)
              {
                  n=(2*n)/3;
                  c++;
 
              }
              else if(n%5==0)
              {
                  n=(4*n)/5;
                  c++;
              }
           }
           if(n==1)
            cout<<c<<endl;
           else
            cout<<"-1"<<endl;
    }
    return 0;
}