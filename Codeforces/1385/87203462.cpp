#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,test,i,n,x,y,z,a,b,c,j;
    cin>>t;
    while(t--)
    {
        int ara[3];
        cin>>ara[0]>>ara[1]>>ara[2];
        sort(ara,ara+3);
        if(ara[0]!=ara[1] && ara[1]!=ara[2] && ara[0]!=ara[2])
            cout<<"NO"<<endl;
        else
        {
            if((ara[0]==ara[1] && ara[1]==ara[2]) || ara[0]!=ara[1])
            {
                cout<<"YES"<<endl;
                cout<<ara[0]<<" "<<ara[0]<<" "<<ara[2]<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}