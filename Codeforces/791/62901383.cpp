#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 
    int a,b,year=0;
    cin>>a>>b;
    while(1)
    {
        if(a>b)
            break;
        a*=3;
        b*=2;
        year++;
    }
    cout<<year<<endl;
    return 0;
}