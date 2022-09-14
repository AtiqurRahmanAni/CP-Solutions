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
vector<int> calc(map<int, int> &graph, vector<bool> &visited, int leaf)
{
    vector<int> ans;
    while (leaf != -1 && !visited[leaf])
    {
        ans.push_back(leaf);
        visited[leaf] = true;
        int parent = graph[leaf];
        leaf = parent;
    }
    // printVec(visited);
    return ans;
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
        vector<int> vec(n);
        map<int, int> graph;
        vector<bool> visited;
        vector<int> leaf;
        leaf.assign(n + 1, -1);
        visited.assign(n + 1, false);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (i + 1 == vec[i])
            {
                graph[vec[i]] = -1;
                leaf[vec[i]] = 0;
            }
            else
            {
                graph[i + 1] = vec[i];
                leaf[vec[i]] = 0;
            }
        }
        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << endl;
            cout << 1 << endl;
            line;
            continue;
        }
        // for (auto it = 1; it <= n; it++)
        // {
        //     cout << it << "->";
        //     cout << graph[it] << endl;
        // }
        // sort(vec.begin(), vec.end());
 
        vector<int> leafs;
        for (int i = 1; i <= n; i++)
        {
            if (leaf[i] == -1)
            {
                leafs.push_back(i);
            }
        }
        int len = leafs.size();
        // printVec(leafs);
 
        cout << len << endl;
        // line;
        for (int x : leafs)
        {
            vector<int> ans = calc(graph, visited, x);
            // cout << x << "--->";
            reverse(ans.begin(), ans.end());
            cout << ans.size() << endl;
            printVec(ans);
        }
        line;
    }
 
    return 0;
}