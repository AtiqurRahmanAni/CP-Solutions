#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    int i;
    string s="";
    cin>>n;
    while(n>0)
    {
        --n;
        s+='a'+(n%26);
        n/=26;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
