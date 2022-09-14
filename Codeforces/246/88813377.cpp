#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 10e9+7
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    if(sum%n==0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
    return 0;
}