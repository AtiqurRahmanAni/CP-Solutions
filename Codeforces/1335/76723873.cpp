#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string s[9];
        for(i=0;i<9;i++)
            cin>>s[i];
        for(i=0;i<9;i++)
        {
            for(auto &c: s[i])
            {
                if(c=='8')
                    c='9';
            }
            cout<<s[i]<<endl;
        }
    }
    return 0;
}