#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,i,j,flag=0;
    vector<string>vec;
    string s,s1;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>s;
        vec.push_back(s);
    }
    for(i=0; i<n; i++)
    {
        s=vec[i];
        if(m%2==0)
            flag=!flag;
        for(j=0;j<m;j++)
        {
            if(flag==0 && s[j]=='.')
            {
                cout<<'W';
            }
            else if(flag==1 && s[j]=='.')
            {
                cout<<'B';
            }
            else
                cout<<'-';
            flag=!flag;
        }
        puts("");
    }
    return 0;
}