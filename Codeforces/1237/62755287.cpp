#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ara[15000];
int main()
{
 
    vector<int>v;
    int i,n,sum=0,x,flag=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=1; i<=n; i++)
    {
        if(v[i-1]%2==0)
            cout<<v[i-1]/2<<endl;
        else
        {
            cout<<(v[i-1]+flag)/2<<endl;
            flag*=-1;
        }
 
    }
 
    return 0;
}