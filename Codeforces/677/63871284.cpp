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
 
    int n,m,sum=0,i,x;
    cin>>n>>m;
    while(n--)
    {
        cin>>x;
        if(x>m)
            sum+=2;
        else
            sum+=1;
    }
    cout<<sum<<endl;
    return 0;
}