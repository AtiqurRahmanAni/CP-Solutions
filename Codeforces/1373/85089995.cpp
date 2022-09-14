#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    int a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>=c)
        {
            cout<<-1<<" "<<b<<endl;
 
        }
        else if((float)a<=(float)c/b)
        {
            cout<<1<<" "<<-1<<endl;
        }
        else
        {
            cout<<1<<" "<<b<<endl;
        }
    }
    return 0;
}