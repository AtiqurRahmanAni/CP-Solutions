#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 2019
#define pi 2*acos(0.0)
int main()
{
    int a,b,h,m;
    cin>>a>>b>>h>>m;
    double angleh=0.5*(60*h+m);
    double anglem=m*6;
    double diff=360-abs(angleh-anglem);
    diff=(pi*(double)diff)/180;
    cout<<setprecision(21)<<fixed<<sqrt(a*a+b*b-2*a*b*cos(diff))<<endl;
    return 0;
}
