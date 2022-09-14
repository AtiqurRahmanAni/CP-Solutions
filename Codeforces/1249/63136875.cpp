#include<bits/stdc++.h>
typedef long long int ll;
#define pi 2*acos(0.0);
using namespace std;
int main()
{
    int q,ara[1000],n,i,cnt,j,flag;
    cin>>q;
    while(q--)
    {
        flag=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(ara[j]-ara[i])==1)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}