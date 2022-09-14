#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[4],i;
    for(i=0;i<4;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+i);
    if((ara[3]==(ara[0]+ara[1]+ara[2]))||(ara[0]+ara[3])==(ara[1]+ara[2]))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}