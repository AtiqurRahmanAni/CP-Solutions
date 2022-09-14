#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{

    string s;
    cin>>s;
    int sz=s.size();
    if(s[sz-1]=='s')
        s+="es";
    else
        s+='s';
    cout<<s<<endl;
    return 0;
}
