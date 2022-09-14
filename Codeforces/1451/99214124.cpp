#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define PI 2*acos(0.0)
#define mod 1e09+7
typedef long long ll;
using namespace std;
int main()
{
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t, n, q, i, j, l, r;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        cin >> s;
        int one=0,zero=0;
        while (q--)
        {
            cin >> l >> r;
            l--;
            r--;
            int flag=0;
            for(i=l-1;i>=0;i--)
            {
                if(s[i]==s[l])
                {
                    flag=1; 
                    break;
                }
            }
            for (int i = r+1; i < n; i++)
            {
                if(s[i]==s[r])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}