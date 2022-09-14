#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi 2*acos(0.0)
#define MOD 1000000007
#define N 100001
#define SZ 100000
int main()
{
    int i;
    string s;
    cin>>s;
    int sz=s.size();
    for(i=0;i<sz;)
    {
        if(s[i]=='.')
        {
            cout<<0;
            i++;
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<1;
                i+=2;
            }
            else if(s[i+1]=='-')
            {
                cout<<2;
                i+=2;
            }
        }
    }
    puts("");
    return 0;
}