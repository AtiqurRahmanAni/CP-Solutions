#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int n,m,i=0,ara[1005],mini=100000;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+i);
    for(i=0;i<m;i++)
    {
        if(i+(n-1)>=m)
            break;
        mini=min(mini,abs(ara[i+(n-1)]-ara[i]));
        //cout<<mini<<endl;
    }
    cout<<mini<<endl;
    return 0;
}