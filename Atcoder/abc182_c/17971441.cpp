#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
using namespace std;
int divisible(string num)
{
    int n = num.length();
    int sum = accumulate(begin(num), end(num), 0) - '0' * 1;
    if (sum % 3 == 0)
        return 0;
    if (n == 1)
        return -1;
    for (int i = 0; i < n; i++)
        if (sum % 3 == (num[i] - '0') % 3)
            return 1;

    if (n == 2)
        return -1;
    return 2;
}
int main()
{
    fastIO
    string s;
    cin>>s;
    cout<<divisible(s)<<endl;
    return 0;
}
