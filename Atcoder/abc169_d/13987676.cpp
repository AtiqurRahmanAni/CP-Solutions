#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int fx[5]= {0,0,0,-1,1};
int fy[5]= {0,-1,1,0,0};
int main()
{
    int a,b,i;
    cin>>a>>b;
    int ara[a];
    if(2*a<=b && 4*a>=b && b%2==0)
    {
        cout<<"Yes"<<endl;
    }
    else if(b%2!=0 || 2*a>b)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
