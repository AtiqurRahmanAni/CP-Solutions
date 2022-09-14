#include<bits/stdc++.h>
#define PI acos(0.0)
#define MOD 1e9+7
typedef long long ll;
using namespace std;
int main()
{
    int t,r,g,b,w;
    int ara[4];
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        cin>>ara[0]>>ara[1]>>ara[2]>>ara[3];
        int even=0,odd=0;
        for(int i=0;i<4;i++)
        {
            if(ara[i]&1)
                odd++;
            else
                even++;
        }
        if(even==3)
        {
            cout<<"Yes"<<endl;
        }
        else if(odd==3)
        {
            if(ara[3]&1 && ara[0]==0 || ara[1]==0 || ara[2]==0)
            {
                cout<<"No"<<endl;
            }
            else
                cout<<"Yes"<<endl;
        }
        else if(even==2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}