#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,ara[3];
    cin>>t;
    while(t--)
    {
       cin>>ara[0]>>ara[1]>>ara[2];
       sort(ara,ara+3);
       if(ara[1]==ara[2]&&ara[1]>ara[0])
       {
           ara[2]--;
           ara[1]--;
           if(ara[1]>ara[0])
           {
               ara[0]++;
           }
 
       }
       else if(ara[0]<ara[1]&&ara[1]<ara[2])
       {
           ara[0]++;
           ara[2]--;
 
       }
       else if(ara[0]==ara[1]&&ara[2]>ara[1])
       {
           ara[2]--;
           if(ara[2]>ara[1])
           {
               ara[1]++;
               ara[0]++;
           }
       }
       cout<<abs(ara[0]-ara[1])+abs(ara[0]-ara[2])+abs(ara[1]-ara[2])<<endl;
    }
    return 0;
}