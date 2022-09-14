#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int ara[120],ara1[120],i,j,cnt=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i]>>ara1[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ara[i]==ara1[j])
                cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}