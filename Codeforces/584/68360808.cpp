#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
   for(int i=2;i<=sqrt(n);i++)
   {
       if(n%i==0)
        return false;
   }
   return true;
}
int main()
{
    int n;
    cin>>n;
    if(check(n))
        printf("%d\n%d",1,n);
    else
    {
        int second=n-3;
        for(int i=3;i<=second/2;i+=2)
        {
            if(check(i)&&check(second-i))
            {
                printf("%d\n%d %d %d\n",3,3,i,second-i);
                break;
            }
        }
    }
    return 0;
}