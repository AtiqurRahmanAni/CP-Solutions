#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s;
    int len,t;
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>s;
        len=s.size();
        if(len>10)
        {
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }
        else
            cout<<s<<endl;
    }
    return 0;
}