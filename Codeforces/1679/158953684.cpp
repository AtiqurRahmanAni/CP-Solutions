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
#include <bitset>
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
const int mod = 1e9 + 7;
 
void prnt(int x)
{
    cout << x << endl;
}
void printVec(vector<int> &vec)
{
    for (int x : vec)
    {
        cout << x << " ";
    }
    line;
}
void printVec(vector<bool> &vec)
{
    for (int x : vec)
    {
        cout << x << " ";
    }
    line;
}
void printVec(vector<string> &vec)
{
    for (string x : vec)
    {
        cout << x << endl;
    }
    line;
}
bool check(vector<int> vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i - 1] > vec[i])
        {
            return false;
        }
    }
    return true;
}
void println(int x)
{
    cout << x << endl;
}
void println(string x)
{
    cout << x << endl;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif
 
    int t;
    // cin >> t;
    // while (t--)
    // {
    ull n, q;
    cin >> n >> q;
 
    // println(q);
    vector<int> vec(n);
    // println(n);
    ull sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    // clecout << sum << endl;
    ull ind, val, qt;
    set<int> st;
    ull prev = 0;
    int flag = 0;
    while (q--)
    {
        cin >> qt;
        // println(qt);
        if (qt == 1)
        {
            cin >> ind >> val;
            ind--;
            if (st.find(ind) == st.end() && flag == 1)
            {
                // println("YES");
                sum -= prev;
                st.insert(ind);
                vec[ind] = val;
                if (st.size() == n)
                    flag = 0;
            }
            else
            {
                // println("NO");
                sum -= vec[ind];
                vec[ind] = val;
            }
            // cout << 1 << " " << val << endl;
            sum += val;
            cout << sum << endl;
        }
        else
        {
            cin >> val;
            sum = n * val;
            st.clear();
            prev = val;
            flag = 1;
            cout << sum << endl;
        }
    }
    // }
    return 0;
}