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
void printVec(vector<int> &vec)
{
    for (int x : vec)
    {
        cout << x << " ";
    }
    line;
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
        int n;
        cin >> n;
        vector<int> vec1(n), vec2(n), vec3(n);
 
        for (int i = 0; i < n; i++)
        {
            cin >> vec1[i];
        }
        vec2[0] = vec1[0];
        vec3[0] = vec1[n - 1];
 
        for (int i = 1; i < n; i++)
        {
            vec2[i] = vec2[i - 1] + vec1[i];
            vec3[i] = vec3[i - 1] + vec1[n - i - 1];
        }
 
        reverse(vec3.begin(), vec3.end());
 
        // printVec(vec2);
        // printVec(vec3);
 
        int i = 0;
        int j = n - 1;
        int ans = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        while (i<j)
        {
            if(vec2[i] != vec3[j])
            {
                if(vec2[i] < vec3[j])
                {
                    i++;
                    cnt1++;
                }
                else if (vec2[i] > vec3[j])
                {
                    j--;
                    cnt2++;
                }
            }
            else
            {
                // cout << vec2[i] << " " << vec3[j] << endl;
                ans = max(ans, ((i + 1) + (n - j)));
                cnt1 = cnt2 = 0;
                i++;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}