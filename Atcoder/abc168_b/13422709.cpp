#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 2019
int main()
{
    int k;
    string s;
    cin>>k>>s;
    int sz=s.size();
    if(sz<=k)
        cout<<s<<'\n';
    else
    {
        string s1=s.substr(0,k);
        cout<<s1<<"..."<<"\n";
    }
    return 0;
}
