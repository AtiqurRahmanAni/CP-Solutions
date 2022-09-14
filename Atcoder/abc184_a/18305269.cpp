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
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n, i;
    char x;
    int ff, oo, xx;
    ff = oo = xx = 0;
    string s;
    cin >> n;
    cin >> s;
    for (i = 0; i < n - 2; i++)
    {
        if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'x')
        {
            s.erase(i, 3);
            i -= 5;
            if (i < 0)
            {
                i = -1;
            }
            n -= 3;
        }
        //cout<<s.size()<<endl;
        //cout<<s<<endl;
    }
    cout << s.size() << endl;
    return 0;
}
