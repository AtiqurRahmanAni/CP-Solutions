#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s,t;
    cin>>s>>t;
    t.pop_back();
    if(s==t)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
