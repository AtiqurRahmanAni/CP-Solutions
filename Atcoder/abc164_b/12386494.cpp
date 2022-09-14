#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int flag=1;
    while(1)
    {
        if(flag)
        {
            c-=b;
            if(c<=0)
            {
                cout<<"Yes"<<endl;
                break;
            }
            flag=0;
        }
        else
        {
            a-=d;
            if(a<=0)
            {
                cout<<"No"<<endl;
                break;
            }
            flag=1;
        }
    }
    return 0;
}
