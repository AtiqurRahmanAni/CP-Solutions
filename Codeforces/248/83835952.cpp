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
    int n,i,a,b,l=0,r=0;
    vector<pair<int,int>>vec;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        l+=a;
        r+=b;
    }
    cout<<min(l,n-l)+min(r,n-r)<<endl;
    return 0;
}