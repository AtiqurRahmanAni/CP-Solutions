#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 2019
int main()
{
    int n;
    cin>>n;
    int digit=n%10;
    if(digit==2 || digit==4 || digit==5 || digit==7 || digit==9)
        cout<<"hon\n";
    else if(digit==0 || digit==1 || digit==6 || digit==8)
        cout<<"pon\n";
    else
        cout<<"bon\n";
    return 0;
}
