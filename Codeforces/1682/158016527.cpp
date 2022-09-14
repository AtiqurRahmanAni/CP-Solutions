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
 
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
        freopen("inputf.txt", "r", stdin);
#endif
 
    // cout << -5 % 2 << endl;
    int t;
    string vowel = "aeiou";
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int cnt = 0;
        bool flag = false;
        if(n % 2 == 0)
        {
            int j = n / 2;
            char ch = s[n / 2 - 1];
            for (int i = n / 2 - 1; i >= 0; i--)
            {
                if(s[i] == s[j] && s[i] == ch)
                {
                    cnt += 2;
                }
                else
                {
                    // flag = true;
                    break;
                }
                j++;
            }
        }
        else
        {
            int j = n / 2 + 1;
            char ch = s[n / 2];
            for (int i = n / 2 - 1; i >= 0; i--)
            {
                if (s[i] == s[j] && s[i] == ch)
                {
                    cnt += 2;
                }
                else
                {
                    // flag = true;
                    break;
                }
            }
            cnt++;
        }
 
        cout << cnt << endl;
    }
    return 0;
}