#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i,ara[1005],maximum,shot=0,seq[1005],j,k,position;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ara[i];
    }
    for(i=1; i<=n; i++)
    {
        maximum=0;
        for(j=1; j<=n; j++)
        {
            if(ara[j]==-1)
                continue;
            if(ara[j]>maximum)
            {
                maximum=ara[j];
                position=j;
            }
        }
        seq[i]=position;
        ara[position]=-1;
        shot+=(maximum*(i-1))+1;
    }
    cout<<shot<<endl;
    for(i=1;i<=n;i++)
    {
        printf("%d",seq[i]);
        if(i!=n)
            printf(" ");
    }
    puts("");
    return 0;
}