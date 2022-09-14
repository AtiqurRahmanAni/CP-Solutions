#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum,x,cnt=0,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        for(int j=1;j<=3;j++)
        {
            cin>>x;
            sum+=x;
        }
        if(sum>1)
            cnt++;
    }
    cout<<cnt<<endl;
 
    return 0;
}