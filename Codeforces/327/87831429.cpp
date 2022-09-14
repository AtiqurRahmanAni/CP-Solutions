#include<bits/stdc++.h>
using namespace std;
bool ara[1299710];
void prime(int n)
{
    int i,j;
    for(i=2;i*i<=1299710;i++)
    {
        if(ara[i]==false)
        {
            for(j=i*i;j<=1299710;j+=i)
            {
                ara[j]=true;
            }
        }
    }
    ara[0]=ara[1]=true;
    int cnt=0;
    for(i=2; ;i++)
    {
        if(ara[i]==false)
        {
            cnt++;
            cout<<i<<" ";
        }
        if(cnt==n)
            break;
    }
}
int main()
{
 
    int n,i;
    cin>>n;
    prime(n);
    return 0;
}