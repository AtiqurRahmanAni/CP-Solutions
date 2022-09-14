#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,x,y;
    int flag;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x<2)
        {
            if(x==y)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
        {
            if(x>=y)
                cout<<"Yes"<<endl;
            else
            {
                flag=0;
                int cnt=0;
                ll z;
                z=x;
                while(1)
                {
                    if(z%2==0)
                    {
                        z=(z*3)/2;
                        cnt=1;
                        if(z==x)
                        {
                            break;
                        }
                        if(z>=y)
                        {
                            flag=1;
                            break;
                        }
 
                    }
                    else if(z%2!=0)
                    {
                        z-=1;
                        if(z==x)
                        {
                            break;
                        }
                    }
                }
                if(flag==0)
                {
                    cout<<"No"<<endl;
                }
                else
                {
                    cout<<"Yes"<<endl;
                }
 
            }
 
        }
    }
    return 0;
}