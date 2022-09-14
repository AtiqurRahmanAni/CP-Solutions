#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int ara[250],i,even=0,odd=0,n,inde,indo;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
        {
            even++;
            inde=i+1;
        }
        else
        {
            odd++;
            indo=i+1;
        }
    }
    if(even==1)
        cout<<inde<<endl;
    else
        cout<<indo<<endl;
    return 0;
}