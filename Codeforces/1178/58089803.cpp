#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,i,j;
    a=b=c=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='o')
            b+=a;
        else if(i>0 && s[i-1]=='v')
        {
            a++;
            //cout<<a<<endl;
            c+=b;
        }
    }
    cout<<c<<endl;
    return 0;
}