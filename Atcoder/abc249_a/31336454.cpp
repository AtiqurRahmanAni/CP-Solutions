#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <set>
#include <iterator>
#include <map>
#include <cmath>
#include <list>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <cstring>
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define PI 2 * acos(0.0)
#define inf 2e9
typedef long long ll;
typedef unsigned long long ull;
#define line cout << endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = {-1, 1, 0, 0};
using namespace std;

void prnt(int x)
{
    cout << x << endl;
}

int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif

    string s;
    cin >> s;
    int len = s.length();
    set<char> st;
    int flag1 = 0;
    int flag2 = 0;
    for(char x : s)
    {
        if(x >= 'A' && x <='Z')
        {
            flag1 = 1;
        }
        else if (x >= 'a' && x <= 'z')
        {
            flag2 = 1;
        }
        st.insert(x);
    }

    if(flag1 + flag2 == 2 && st.size() == len)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}
