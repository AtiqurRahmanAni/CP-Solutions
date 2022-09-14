#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<set>
#include<iterator>
#include <map>
#include<cmath>
#include <list>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t, n, cnt,i;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else if(n==2)
        {
            cout<<1<<endl;
        }
        else if(n%2==0)
        {
            cout<<2<<endl;
        }
        else if(n==3)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;   
        }
    }
    return 0;
}