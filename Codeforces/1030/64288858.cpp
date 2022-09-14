#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int n,i,x,flag=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
            flag=1;
    }
    if(flag==0)
        cout<<"easy";
    else
        cout<<"hard";
    puts("");
    return 0;
}