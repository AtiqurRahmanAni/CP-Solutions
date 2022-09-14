#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;a[i];i++)
    {
        if(a[i]==b[i])
        {
            cout<<0;
        }
        else
            cout<<1;
    }
    puts("");
    return 0;
}