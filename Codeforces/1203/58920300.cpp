#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ara[1000],i,j,flag,n,c;
    long int k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        for(i=0;i<4*n;i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+4*n);
        j=4*n-1;
        k=ara[0]*ara[4*n-1];
        for(i=0;i<2*n-1;i+=2)
        {
            if(ara[i]!=ara[i+1]||ara[4*n-i-1]!=ara[4*n-i-2]||ara[i]*ara[4*n-i-2]!=k)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}