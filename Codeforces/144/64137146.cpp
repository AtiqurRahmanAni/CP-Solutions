#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long int GCD(long int a,long int b)
{
    if(b==0)
        return a;
 
       return GCD(b,a%b);
}
int main()
{
    int n,i,mini,maxi,ara[150],cnt=0,indmin,indmax;
    int *p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    p=min_element(ara,ara+i);
    mini=(*p);
    p=max_element(ara,ara+i);
    maxi=(*p);
    for(i=0;i<n;i++)
    {
        if(ara[i]==maxi)
        {
            indmax=i;
            break;
        }
    }
    int temp;
    for(i=indmax;i>0;i--)
    {
        temp=ara[i];
        ara[i]=ara[i-1];
        ara[i-1]=temp;
        cnt++;
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==mini)
        {
            indmin=i;
        }
    }
    for(i=indmin;i<n-1;i++)
    {
        temp=ara[i];
        ara[i]=ara[i+1];
        ara[i+1]=temp;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}