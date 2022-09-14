#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int n,i;
   double s,sum=0;
   cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        sum+=s;
    }
    printf("%f\n",sum/(double)n);
    return 0;
}