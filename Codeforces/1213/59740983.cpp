#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
 
int main()
{
 
    int cnte=0,cnto=0;
    ll x,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
            cnte++;
        else
            cnto++;
    }
    cout<<min(cnte,cnto)<<endl;
    return 0;
}