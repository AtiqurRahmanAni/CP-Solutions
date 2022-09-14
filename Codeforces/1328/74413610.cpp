#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ta;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%b==0)
            cout<<0<<endl;
        else if(a>b)
        {
            ta=ceil((double)a/(double)b);
            cout<<b*ta-a<<endl;
        }
        else
        {
            cout<<b-a<<endl;
        }
    }
    return 0;
}