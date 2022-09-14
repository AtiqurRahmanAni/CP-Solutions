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
 
    int t;
    cin >> t;
    while (t--)
    {
        int rating;
        cin >> rating;
 
        if(rating <= 1399)
        {
            cout << "Division 4\n";
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            cout << "Division 3\n";
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            cout << "Division 2\n";
        }
        else if (rating >= 1900)
        {
            cout << "Division 1\n";
        }
    }
 
    return 0;
}