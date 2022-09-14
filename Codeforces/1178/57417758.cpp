#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ara[200],sum=0,cnt=0,flag1=0,flag2=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    x=(sum/2)+1;
    if(ara[0]>=x)
        printf("1\n1\n");
    else
    {
        for(i=1;i<n;i++)
        {
            if(2*ara[i]<=ara[0])
            {
                flag1=1;
                break;
            }
 
        }
        if(flag1==0)
            printf("0\n");
        else{
                for(i=1;i<n;i++)
                {
                    if(2*ara[i]>ara[0])
                        ara[i]=-2;
                }
        sum=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]==-2)
                continue;
            sum+=ara[i];
            if(sum>=x)
            {
                flag2=1;
                ara[i]=-1;
                break;
            }
 
        }
        if(flag2==0)
            {
                cout<<"0"<<endl;
                return 0;
            }
        else{
        for(i=0;i<n;i++)
        {
            if(ara[i]==-2)
                continue;
            if(ara[i]==-1)
            {
                cnt++;
                break;
            }
 
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]==-2)
                continue;
            if(ara[i]==-1)
                break;
            cnt++;
        }
        cout<<cnt<<endl;
        for(i=0;i<n;i++)
        {
            if(ara[i]==-2)
                continue;
            if(ara[i]==-1)
            {
                cout<<i+1<<endl;
                break;
            }
            else
                printf("%d ",i+1);
        }
 
    }
    }
    }
 
 
    return 0;
}