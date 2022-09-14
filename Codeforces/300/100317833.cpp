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
#define line cout<<endl
typedef long long ll;
typedef long long ull;
ll MOD = 1000000007;
using namespace std;
int fx[] = {1, -1, 0, 0};
int fy[] = {0, 0, -1, 1};
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    int negative = 0, positive = 0, zero = 0, last = -2e9, flag = 0;
    cin >> n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ara[i];
        if (ara[i] < 0)
        {
            negative++;
            last = max(last,ara[i]);
        }
        else if (ara[i] > 0)
        {
            positive++;
        }
        else
        {
            zero++;
        }
    }
    sort(ara, ara + n);
    if (positive == 0)
    {
        if (negative % 2 == 0)
        {
            flag = 1;
            cout << negative - 3 << " ";
            for (int i = 0 ; i < negative - 3; i++)
            {
                cout << ara[i] << " ";
            }
            line;
            cout << 2 << " ";
            for (int i = negative - 3; i < negative - 1; i++)
            {
                cout << ara[i] << " ";
            }
            line;
        }
        else
        {
            cout << negative - 2 << " ";
            for (int i = 0 ; i < negative - 2; i++)
            {
                cout << ara[i] << " ";
            }
            line;
            cout << 2 << " ";
            for (int i = negative - 2; i < negative; i++)
            {
                cout << ara[i] << " ";
            }
            line;
        }
    }
    else
    {
        if (negative % 2 == 0)
        {
            flag = 1;
            cout << negative - 1 << " ";
            for (int i = 0; i < negative - 1; i++)
            {
                cout << ara[i] << " ";
            }
            line;
        }
        else
        {
            cout << negative << " ";
            for (int i = 0; i < negative; i++)
            {
                cout << ara[i] << " ";
            }
            line;
        }
        cout << positive << " ";
        for (int i = 0; i < n; i++)
        {
            if (ara[i] > 0)
            {
                cout << ara[i] << " ";
            }
        }
        line;
    }
    if (flag)
    {
        cout << zero + 1 << " ";
        for (int i = 0; i < zero; i++)
        {
            cout << 0 << " ";
        }
        cout << last;
    }
    else {
        cout << zero << " ";
        for (int i = 0; i < zero; i++)
        {
            cout << 0 << " ";
        }
    }
 
    line;
}