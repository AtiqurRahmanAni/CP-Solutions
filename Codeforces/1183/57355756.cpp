#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int n,x;
    cin>>n;
    while(1)
    {
        if(sum(n)%4==0)
    {
        cout<<n<<endl;
        break;
    }
    else
        sum(++n);
    }
 
    return 0;
}