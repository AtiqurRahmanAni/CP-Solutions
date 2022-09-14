#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,t,i;
    cin>>n>>t;
    int ara[n+5];
    for(i=1; i<n; i++)
        cin>>ara[i];
    int cell=ara[1]+1;
    int flag=0;
    while(1)
    {
        if(cell==t)
        {
            flag=1;
            break;
        }
        if(cell>=n)
            break;
        cell=ara[cell]+cell;
        //cout<<cell<<endl;
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}