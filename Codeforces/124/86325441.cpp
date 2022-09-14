#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int t1=n-b;
    int t2=a+1;
    if(t1<t2)
        t1=t2;
    cout<<n-t1+1<<endl;
    return 0;
}