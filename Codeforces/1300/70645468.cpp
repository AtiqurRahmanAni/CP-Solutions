#include<bits/stdc++.h>
#include<time.h>
typedef long long ll;
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ara[(n*2)+5];
        for(i=0;i<n*2;i++)
            cin>>ara[i];
        sort(ara,ara+2*n);
        cout<<ara[n]-ara[n-1]<<endl;
 
    }
    return 0;
}