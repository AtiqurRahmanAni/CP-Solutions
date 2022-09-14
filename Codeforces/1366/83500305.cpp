#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0 || b==0)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<min((a+b)/3,min(a,b))<<endl;
    }
    return 0;
}