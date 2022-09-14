#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int t1=n*a;
    int t2=((n/m)*b)+((n-(n/m)*m)*a);
    int t3=((n/m)+1)*b;
    cout<<min(min(t1,t2),t3)<<endl;
    return 0;
}