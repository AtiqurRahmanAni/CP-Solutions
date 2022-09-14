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
    int n,i;
    cin>>n;
    if(n==1 || n%2!=0)
        cout<<-1<<endl;
    else
    {
        for(i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        puts("");
    }
    return 0;
}