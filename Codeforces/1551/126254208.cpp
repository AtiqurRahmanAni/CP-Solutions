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
#include <stdlib.h>
#include<ctime>
#include<cstring>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
#define inf 2e9
typedef long long ll;
typedef unsigned long long ull;
#define line cout<<endl
using namespace std;
int fy[] = {0, 0, 1, -1};
int fx[] = { -1, 1, 0, 0};
void printVec(vector<int>&vec)
{
    for(auto x : vec)
    {
        cout<<x<<' ';
    }
    line;
}
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("inputf.txt", "r", stdin);
//    freopen("outputf.txt", "w", stdout);
    clock_t start, end;
    start = clock();
#endif
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int two = n/3;
        int two1 = 0;
        if(n % 3 != 0)
            two1 = two + 1;
        int one = n - two*2;
        int one1 = n - two1*2;
        if(abs(one - two) < abs(one1 - two1))
            cout<<one<<' '<<two<<endl;
        else
            cout<<one1<<' '<<two1<<endl;
    }
 
#ifndef ONLINE_JUDGE
    end = clock();
    printf("\nTime taken: %.5f\n", ((double) (end - start)) / CLOCKS_PER_SEC);
#endif
    return 0;
}