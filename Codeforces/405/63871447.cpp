#include<bits/stdc++.h>
using namespace std;
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
    int ara[120],i,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+i);
    for(i=0;i<n;i++)
        cout<<ara[i]<<' ';
    puts("");
 
    return 0;
}