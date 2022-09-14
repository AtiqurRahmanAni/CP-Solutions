#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int page,ara[7],i;
    cin>>page;
    for(i=0;i<7;i++)
    {
        cin>>ara[i];
    }
    i=0;
    int sum=0;
    while(1)
    {
        sum+=ara[i];
        if(sum>=page)
            break;
        i++;
        i%=7;
    }
    cout<<i+1<<endl;
    return 0;
}