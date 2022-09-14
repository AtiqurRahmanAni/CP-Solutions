#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,crime=0,police=0;
    cin>>n;
    int ara[n+5];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int flag=0;
    for(i=0; i<n; i++)
    {
        if(ara[i]==-1)
        {
            crime++;
            if(flag)
            {
                if(police>0)
                {
                    crime--;
                    police--;
                }
                if(police<=0)
                    flag=0;
            }
        }
        if(ara[i]!=-1)
        {
            flag=1;
            police+=ara[i];
        }
    }
    cout<<crime<<endl;
    return 0;
}