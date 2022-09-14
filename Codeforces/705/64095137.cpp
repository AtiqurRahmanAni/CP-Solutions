#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            if(i!=n)
                printf("I hate that ");
            else
                printf("I hate it ");
        }
        else
        {
            if(i!=n)
                printf("I love that ");
            else
                printf("I love it ");
        }
 
    }
    puts("");
    return 0;
}