#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<4*(sqrt((a*b)/c)+sqrt((b*c)/a)+sqrt((a*c)/b))<<endl;
    return 0;
}