#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool ara[15000];
int main()
{
 
    int x,cnt=0;
    cin>>x;
    cnt+=x/5;
    x%=5;
    cnt+=x/4;
    x%=4;
    cnt+=x/3;
    x%=3;
    cnt+=x/2;
    x%=2;
    cnt+=x/1;
    cout<<cnt<<endl;
    return 0;
}