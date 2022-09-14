#include<bits/stdc++.h>
using namespace std;
int ara[100005];
int process(int n)
{
    int sum=0;
    while(n)
    {
        sum+=powl(n%10,2);
        n/=10;
    }
    return sum;
}
int main()
{
 
    int k,l,m,n,d,i,cnt=0;
    cin>>k>>l>>m>>n>>d;
    for(i=1; i<=d; i++)
    {
        if(k*i<=d&&ara[k*i]!=1)
        {
            ara[k*i]=1;
            cnt++;
        }
        if(l*i<=d&&ara[l*i]!=1)
        {
            ara[l*i]=1;
            cnt++;
        }
        if(m*i<=d&&ara[m*i]!=1)
        {
            ara[m*i]=1;
            cnt++;
        }
        if(n*i<=d&& ara[n*i]!=1)
        {
            ara[n*i]=1;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}