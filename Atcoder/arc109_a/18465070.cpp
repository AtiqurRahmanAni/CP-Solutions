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
#include<string>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
    int n,x;
    string s;
    cin>>n>>x;
    cin>>s;
    ll ans=x;
    for(char ch : s)
    {
        if(ch=='x' && ans>0)
        {
            ans--;
        }
        else if(ch=='o')
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
