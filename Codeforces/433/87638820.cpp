#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,one=0,two=0,x;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==100)
            one++;
        else
            two++;
        ara[i]=x;
    }
    if((one%2!=0 && two==0)||(two%2!=0 && one==0))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if((one%2==0 && two==0)||(two%2==0 && one==0)||(one==two&& n%2==0 && (n/2)%2==0)||((one%2==0)&&two==(one/2))||(abs(one-two*2)%2==0 && n!=1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
    return 0;
}